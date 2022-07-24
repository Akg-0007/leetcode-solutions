class Solution {
public:
    void fb(vector<int>& candidates, int target,int index,vector<vector<int>>&v,vector<int>a)
    {
       if(index==candidates.size())
       {
           if(target==0){
           v.push_back(a);}
           return;
           
       }
        if(target>=candidates[index])
        {
            a.push_back(candidates[index]);
         fb(candidates,target-candidates[index],index,v,a);
            a.pop_back();

        }
        fb(candidates,target,index+1,v,a);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> v;
        vector<int>a;
        fb(candidates,target,0,v,a);
        return v;
    }
};