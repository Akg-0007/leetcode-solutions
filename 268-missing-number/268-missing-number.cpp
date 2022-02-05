class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int re=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            re^=nums[i];
            re^=i;
        }
        return re;
    }
};