class Solution {
public:
    
    void rec(vector<int> nums,vector<int> out,vector<vector<int>>& v,int index )
    {
        if(index>=nums.size()){
            v.push_back(out);
             return;  
        }
        rec(nums,out,v,index+1);
        int x=nums[index];
        out.push_back(x);
        rec(nums,out,v,index+1);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>> v;
        vector <int> out;
        int index=0;
        rec(nums,out,v,index);
        return v;
        
    }
};