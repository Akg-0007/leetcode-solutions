class Solution {
public:
   int ispal(vector<vector<int>>&v,string &s,int i,int j)
    {
        if(i>=j){return 1;}
        if(v[i][j]>=0){return v[i][j];}
        return v[i][j] = s[i] == s[j] ? ispal(v, s, i+1, j-1) : 0;   
    }
    int countSubstrings(string s) {
        vector<vector<int>>v(s.size(), vector<int>(s.size(), -1));
        int cnt=0;
       for(int i=0;i<s.length();i++)
       {
           for(int j=i;j<s.length();j++)
           {
               cnt+=ispal(v,s,i,j);
           }
       }
      return cnt;
    }
};