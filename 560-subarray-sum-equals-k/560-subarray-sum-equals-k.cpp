class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prevSum;
        
        int res = 0,sum = 0;
        for (int i = 0; i < nums.size(); i++) 
        {
            sum += nums[i];
            
            if (sum == k)
                res++;
 
        if (prevSum.find(sum - k) != prevSum.end())
            res += (prevSum[sum - k]);
            
        prevSum[sum]++;
    }
 
    return res;
    }
};