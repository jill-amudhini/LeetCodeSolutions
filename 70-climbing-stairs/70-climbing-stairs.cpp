class Solution {
public:
    int climbStairs(int n) {
        int dp[n+1];
        dp[0] = 1;
        dp[1] = 1;
     
        for(int i=2;i<=n;i++)
        {
            dp[i] = 0;
        
            for(int j=1;j<=2 && j<=i;j++)
                dp[i]+=dp[i-j];
        }
        
        return dp[n];
    }
};