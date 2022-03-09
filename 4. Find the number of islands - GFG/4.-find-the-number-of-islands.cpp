// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    void check(vector<vector<char>>& grid,int m,int n,int i,int j,int dx[],int dy[]){
        if(i<0||j<0||i>=m||j>=n ||grid[i][j]=='0')return ;
        grid[i][j]='0';
        for(int k=0;k<8;k++ )
        {
            int nx=i+dx[k];
            int ny=j+dy[k];
            check(grid,m,n,nx,ny,dx,dy);
        }
        
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int m=grid.size(),n=grid[0].size();
        int c=0;
        int dx[]={-1,-1,-1,0,0,1,1,1};
        int dy[]={-1,0,1,-1,1,-1,0,1};
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='1')c++;
                check(grid,m,n,i,j,dx,dy);
            }
        }
        return c;
        
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends