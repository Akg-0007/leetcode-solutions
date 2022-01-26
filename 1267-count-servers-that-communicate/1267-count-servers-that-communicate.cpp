class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
       int row=grid.size(),col=grid[0].size();
        int count=0;
        vector<int> r(row,0),c(col,0);
        for(int i=0;i<row;i++)
        {
           for(int j=0;j<col;j++)
            {
               if(grid[i][j]==1){
                   r[i]++;
                   c[j]++;}
            }
        }
            for(int i=0;i<row;i++)
        {
           for(int j=0;j<col;j++)
           {
               if(grid[i][j]==1 && (r[i]>1 ||c[j]>1))
                  count++;
            }  
        } 
        return count;
    }
};