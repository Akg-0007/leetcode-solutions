class Solution {
public:
    int findFinalValue(vector<int>& nums, int cnt) {
        sort(begin(nums),end(nums));
       for(auto i:nums)   if(i==cnt) cnt*=2;
       return cnt; 
    }
};