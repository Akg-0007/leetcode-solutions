        
        class Solution {
public:
     void solve(vector<int> nums, set<vector<int>>& ans,int index)
     {
         if(index>=nums.size())
         {
             ans.insert(nums);
             return ;
         }
         for(int i=index;i<nums.size();i++)
         {
             swap(nums[i],nums[index]);
             solve(nums,ans,index+1);
             swap(nums[i],nums[index]);
             
         }
         
     }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
     vector<vector<int>> ans;
        set<vector<int>> res;
        int index=0;
        solve(nums,res,index);
        set<vector<int>> s;
        for(auto i:res)ans.push_back(i);
        return ans;
    }
};
        
   