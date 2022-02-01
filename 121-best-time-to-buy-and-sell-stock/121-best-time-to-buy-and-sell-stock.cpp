class Solution {
public:
    int maxProfit(vector<int>& p) {
      int low=p[0];
        int pro=0;
          int n=p.size();
          for(int i=0;i<n;i++)
          {
              low=min(low,p[i]);
              pro=max(p[i]-low,pro);
          }
        return pro;
    }
};