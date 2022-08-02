class Solution {
public:
    int minPartitions(string n) {
        char maxS=n[0];
        for(int i=1;i<n.length();i++)
        {
            if(maxS<n[i])
            {
                maxS=n[i];
            }
        }
        return maxS-48;
    }
};