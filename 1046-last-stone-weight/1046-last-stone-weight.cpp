class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        priority_queue<int> s;
        for(int i=0;i<stones.size();i++)
        {
            s.push(stones[i]);
        }
        
        while(s.size()>1)
        {
            int s1=s.top();
            s.pop();
            int s2=s.top();
            s.pop();
            
            int s3=abs(s1-s2);
            s.push(s3);
            
        }
        
        return s.top();
        
    }
};