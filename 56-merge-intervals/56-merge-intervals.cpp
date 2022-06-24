class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        sort(v.begin(), v.end());
        vector<vector<int>> o;
        o.push_back(v[0]);
        for(int i=1; i<v.size(); i++) {
            if(o.back()[1] >= v[i][0]) o.back()[1] = max(o.back()[1] , v[i][1]);
            else o.push_back(v[i]); 
        }
        return o; 
    }
};