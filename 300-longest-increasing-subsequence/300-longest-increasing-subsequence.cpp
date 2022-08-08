class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int N=nums.size();
        vector<int> DP(N,1);
        for(int i=N-1;i>=0;i--)
        {
            for(int j=i+1;j<N;j++)
            {
                if(nums[i]<nums[j])
                {
                    DP[i]=max(DP[i],1+DP[j]);
                }
            }
        }
        
        return *max_element(DP.begin(),DP.end());
    }
};