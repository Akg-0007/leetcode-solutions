class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
       int ma=0;
        int row=accounts.size(),col=accounts[0].size();
        for(int i=0;i<row;i++)
        {
           int sim=0;
           for(int j=0;j<col;j++)
        {
            sim+=accounts[i][j];
        } 
             ma=max(sim,ma);
        }
        return ma;
    }
};