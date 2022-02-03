class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int> ans;
        priority_queue <pair<int,int>> pq;
        int n= nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]+=1;
        }
        for(auto it:m){
            pq.push({-it.second,it.first});
        }
        while(!pq.empty()){
            int k= pq.top().first;
            while(k<0){
                ans.push_back(pq.top().second);
                k++;
            }
            pq.pop();
        }
        
        return ans;
        
    }
};