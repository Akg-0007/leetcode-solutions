class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int row=matrix.size(),col=matrix[0].size();
        int maxo=0;
         if(matrix.size()==0) return 0;
        
        vector<vector<int>> dp(row+1,vector<int>(col+1,0));
        for(int i=1;i<=row;i++){
            for(int j=1;j<=col;j++)
            {
                if(matrix[i-1][j-1]=='1')
                dp[i][j]=min({dp[i][j-1],dp[i-1][j],dp[i-1][j-1]})+1;
                maxo=max({dp[i][j],maxo});
            }
        }
       return maxo*maxo;
    }
};