class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char, int> mp;
        priority_queue<int> pq;
        int cnt = 0;
        for (int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
        }
        for (auto it : mp) 
        {
            pq.push(it.second);
        }
        while (!pq.empty()) 
        {
            int frequent = pq.top();
            pq.pop();
            if (pq.empty()) 
            {
                return cnt;
            }
            if (frequent == pq.top()) 
            {
            if (frequent > 1) {
                pq.push(frequent - 1);
            }
            cnt++;
        }
    }
 
    return cnt;
        
    }
};