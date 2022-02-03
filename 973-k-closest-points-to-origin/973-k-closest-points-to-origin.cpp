class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n= points.size();
     vector<vector<int>> v;
        
        priority_queue <pair<int,pair<int,int>>> pq;
        
       
        for(int i=0;i<n;i++)
        {
        
            pq.push(make_pair(points[i][0]*points[i][0] +points[i][1]*points[i][1],make_pair(points[i][0],points[i][1])));
            if(pq.size()>k)pq.pop();
            
        }
        while(!pq.empty()){
                vector<int>temp={pq.top().second.first,pq.top().second.second};
            v.push_back(temp);
            pq.pop();
            }
    

        
        return v;  
    }
};