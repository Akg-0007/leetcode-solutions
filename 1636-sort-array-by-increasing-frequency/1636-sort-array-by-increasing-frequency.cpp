class Solution {
public:
    vector<int> frequencySort(vector<int>& arr) {
       priority_queue<pair<int,int>>q;
        vector<int>v;
        unordered_map<int,int>m;
        
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        for(auto i:m)
        {
            q.push({-i.second,i.first});
        }
        while(!q.empty())
        {
           int k=q.top().first;
          while(k<0){
              v.push_back(q.top().second);
              k++;
          }
            q.pop();
        }
        return v;
        
    }
};