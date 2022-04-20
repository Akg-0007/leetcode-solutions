class Solution {
public:
    int findDuplicate(vector<int>& nums) {
//          int n=nums.size();
//      vector<int>v(n+1,0);
       
//         int res;
//         for(int i=0;i<n;i++)
//         {
//             v[nums[i]]++;
//             if(v[nums[i]]>1)
//             {
//                 res=nums[i];
//                 break;
//             }
//         }
//         return res;
        
        //int res=nums[0];
        for(int i=0;i<nums.size();i++)
        {
        if(nums[abs(nums[i])]>0)nums[abs(nums[i])]=-nums[abs(nums[i])];
        else return abs(nums[i]);
        }
        return -1;
        
    }
};