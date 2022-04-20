class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      vector<int> v;
        int n=nums.size();
        map<int,int >m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto i:m)
        {
            if(i.second>n/3){v.push_back(i.first);}
        }
        return v;
    }
};