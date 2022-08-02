class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=columnTitle.length();
        long long c=1;
        long long columnNum=0;
        for(int i=n-1;i>=0;i--)
        {
            columnNum+=c*(columnTitle[i]-'A'+1);
            c*=26;
        }
        return columnNum;
    }
};