class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> d,r;
        for(int i=0;i<n;i++)
        {
            d.push_back(0);
        }
        
        for(int i=0;i<n;i++)
        {
            d[nums[i]-1]+=1;
        }
        
        for(int i=0;i<n;i++)
        {
            if(d[i]==2)
                r.push_back(i+1);
        }
        
        return r;
    }
};