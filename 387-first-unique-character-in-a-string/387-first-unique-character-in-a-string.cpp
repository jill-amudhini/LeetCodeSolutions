class Solution {
public:
    int firstUniqChar(string s) {
        int countAlp[26] = {0};
        queue<int> uniq;
        
        for(int i=0;i<s.length();i++)
        {
            if(countAlp[s[i]-97]==0)
            {
                uniq.push(i);
            }
            countAlp[s[i]-97]++;
        }
        
        while(!uniq.empty())
        {
            int ind = uniq.front();
            if(countAlp[s[ind]-97]==1)
                return ind;
            
            uniq.pop();
        }
        
        return -1;
    }
};