class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
      unordered_map<char ,int>m;
       int mx=0;
        for(auto i:tasks){
            m[i]++;
            mx=max(m[i],mx);
        }
        int ans=(mx-1)*(n+1);
        for(auto i:m){
            if(i.second==mx)ans++;
        }
        return max(ans,(int)tasks.size());
        
    }
};