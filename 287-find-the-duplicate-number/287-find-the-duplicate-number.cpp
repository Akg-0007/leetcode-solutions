class Solution {
public:
    int findDuplicate(vector<int>& nums) {
         int n=nums.size();
     vector<int>v(n+1,0);
       
        int res;
        for(int i=0;i<n;i++)
        {
            v[nums[i]]++;
            if(v[nums[i]]>1)
            {
                res=nums[i];
                break;
            }
        }
        return res;
        
    }
};