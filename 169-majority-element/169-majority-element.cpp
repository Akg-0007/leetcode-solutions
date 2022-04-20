class Solution {
public:
    int majorityElement(vector<int>& nums) {
     int cnt=0,ele=0;
        for(int i:nums)
        {
            if(cnt==0)ele=i;
            if(i==ele)cnt++;
            else cnt--;
        }
        return ele;
    }
};