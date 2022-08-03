class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<score.size();i++)
        {
            pq.push(make_pair(score[i],i));
        }
        
        vector<string> ans(score.size());
        int c=0;
        string s[]={"Gold Medal", "Silver Medal", "Bronze Medal"};
        while(!pq.empty())
        {
            pair<int,int> p=pq.top();
            pq.pop();
            c++;
            if(c<=3)
            {
                ans[p.second]=s[c-1];
            }
            else
            {
                ans[p.second]=to_string(c);
            }
            
        }
        
        return ans;
        
    }
};