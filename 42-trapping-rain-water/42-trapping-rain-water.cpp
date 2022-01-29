class Solution {
public:
    int trap(vector<int>& height) {
      int i=0,j=height.size()-1,ml=0,mr=0,sum=0;
        while(i<j)
        {
            if(height[i]<=height[j]){
                ml=max(ml,height[i]);
                sum+=ml-height[i];
                i++;}
            else{
                  mr=max(mr,height[j]);
                   sum+=mr-height[j];
                j--;
            }
        }
        return sum;
    }
};