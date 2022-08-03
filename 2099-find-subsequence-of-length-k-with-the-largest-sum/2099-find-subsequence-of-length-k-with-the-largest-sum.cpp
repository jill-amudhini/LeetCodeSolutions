class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> pq;
        
        for(int i=0;i<nums.size();i++)
        {
            pq.push(make_pair(-nums[i],-i));
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        
        priority_queue<int> index;
        while(pq.size()!=0)
        {
            index.push(pq.top().second);
            pq.pop();
        }
        
        vector<int> ans;
        while(index.size()!=0)
        {
            ans.push_back(nums[-index.top()]);
            index.pop();
        }
        
        return ans;
    }
};