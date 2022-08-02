class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int p=0;
        
        for(int i=0;i<r;i++)
        {
            int n1=0,n2=0;
            if(grid[i][0]==1)
            {
                if(c>1)
                    n1=grid[i][1];
                if(i!=0)
                    n1+=grid[i-1][0];
                if(i!=r-1)
                    n1+=grid[i+1][0];
                p+=4-n1;
                cout<<i<<0<<" "<<n1<<endl;
            }
            if(c>1 && grid[i][c-1]==1)
            {
                if(c>1)
                    n2=grid[i][c-2];
                if(i!=0)
                    n2+=grid[i-1][c-1];
                if(i!=r-1)
                    n2+=grid[i+1][c-1];
                p+=4-n2;
                cout<<i<<c-1<<" "<<n2<<endl;
            }
        }
        
        for(int j=1;j<c-1;j++)
        {
            int n1=0,n2=0;
            if(grid[0][j]==1)
            {
                if(r>1)
                    n1=grid[1][j];
                if(j!=0)
                    n1+=grid[0][j-1];
                if(j!=c-1)
                    n1+=grid[0][j+1];
                p+=4-n1;
                cout<<0<<j<<" "<<n1<<endl;
            }
            if(r>1 && grid[r-1][j]==1)
            {
                if(r>1)
                    n2=grid[r-2][j];
                if(j!=0)
                    n2+=grid[r-1][j-1];
                if(j!=c-1)
                    n2+=grid[r-1][j+1];
                p+=4-n2;
                cout<<r-1<<j<<" "<<n2<<endl;
            }
        }
        
        for(int i=1;i<r-1;i++)
            for(int j=1;j<c-1;j++)
            {
                if(grid[i][j]==1)
                {
                    int n=0;
                    n=grid[i-1][j]+grid[i][j-1]+grid[i+1][j]+grid[i][j+1];
                    p+=4-n;
                    cout<<i<<j<<" "<<n<<endl;
                }
            }
        
        return p;
    }
};