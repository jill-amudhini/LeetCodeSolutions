class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int m=dungeon.size();
        int n=dungeon[0].size();
        int ini=dungeon[0][0];
        for(int i=m-2;i>=0;i--)
        {
            int a=dungeon[i][n-1];
            dungeon[i][n-1]+=dungeon[i+1][n-1];
            dungeon[i][n-1]=min(1,min(a,dungeon[i][n-1]));
        }
        for(int i=n-2;i>=0;i--)
        {
            int a=dungeon[m-1][i];
            dungeon[m-1][i]+=dungeon[m-1][i+1];
            dungeon[m-1][i]=min(1,min(a,dungeon[m-1][i]));
        }
        
        
        
        for(int i=m-2;i>=0;i--)
            for(int j=n-2;j>=0;j--)
            {
                int a=dungeon[i][j];
                dungeon[i][j]+=max(dungeon[i+1][j],dungeon[i][j+1]);
                dungeon[i][j]=min(1,min(a,dungeon[i][j]));
            }
        
        //if(abs(min(dungeon[0][0],0))+1+ini>0)
            return abs(min(dungeon[0][0],0))+1;
        //else
            //return abs(ini)+1;
    }
};