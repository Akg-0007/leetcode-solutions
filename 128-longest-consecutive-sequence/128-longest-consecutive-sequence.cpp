class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      set<int>s;
        int h=0;
    for(int i=0;i<nums.size();i++)
    {
        s.insert(nums[i]);
    }
        for(int i:s)
        {
            if(!s.count(i-1)){ 
                int ce=i;
                int se=1;
            while(s.count(ce+1)){
                ce+=1;se+=1;
            }
               h=max(h,se);               
                             }
        }
        return h;
    }
};