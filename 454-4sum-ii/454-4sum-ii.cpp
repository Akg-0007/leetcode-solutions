class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        map<int,int> mp;
        int c=0;
        for(auto i:nums3){
            for(auto j:nums4){
                mp[i+j]++;
            }
        }
        for(auto k:nums1){
            for(auto l:nums2){
               c+= mp[-(k+l)];
            }
        }
        return c;
    }
};