class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        stack<pair<int,int>>s;
        sort(v.begin(),v.end());
        s.push({v[0][0],v[0][1]});
        for(int i=1;i<v.size();i++)
        {
           int l = v[i][0], r = v[i][1];
            pair<int,int> top = s.top();
            if(top.second>=l){s.pop();
            s.push({top.first,max(top.second,r)});}
            else{ s.push({ l, r });}
        }
        vector<vector<int>>re;
        while(!s.empty())
        {
            re.push_back({s.top().first,s.top().second});
            s.pop();
        }
        return re;
    }
};