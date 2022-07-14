class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int m=0,s=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)m++;
            else{ m=0;}
            s=max(s,m);
        }
        return s;
    }
};