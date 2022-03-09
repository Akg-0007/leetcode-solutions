class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        //vector<vector<bool>v(m,vector<bool>(n,false));
        //momo(grid,vis,0,0);
        int d=0,t=0,cnt=0;
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
               if(grid[i][j]!=0) t++;
                if(grid[i][j]==2)q.push({i,j});
            }
        }
        int dx[4]={0,0,1,-1};
        int dy[4]={1,-1,0,0};
        while(!q.empty()){
            int k=q.size();
            cnt+=k;
            while(k--){
                int x=q.front().first,y=q.front().second;
                q.pop();
                for(int i=0;i<4;i++)
                {
                    int nx=x+dx[i],ny=y+dy[i];
                    if(nx<0 || ny<0 || nx>=m || ny>=n ||grid[nx][ny]!=1)continue;
                    grid[nx][ny]=2;
                    q.push({nx,ny});
                }
                
                
            }
            if(!q.empty())d++;
            
        }
     return t==cnt? d:-1;
    }
};