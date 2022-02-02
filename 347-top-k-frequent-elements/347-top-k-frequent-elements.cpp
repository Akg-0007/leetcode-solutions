class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         map<int,int>m;
    for(auto i : nums)
        m[i]++;
    
    
    priority_queue<pair<int,int>>pq;
    
    for(auto i : m)
    
        pq.push(make_pair(i.second, i.first));

    
    vector<int> vect;
    for(int i=0;i<k;i++)
    {
        auto x  = pq.top();
        vect.push_back(x.second);
        pq.pop();
    }
    return vect;
    }
};