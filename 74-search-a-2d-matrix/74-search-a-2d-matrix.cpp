class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      //  if(matrix.length==0)return false;
     int r = matrix.size();
int c = matrix[0].size();
    
  int l=0;int h=r*c-1;
        while(l<=h)
        {
            int mid=((l+h)-l/2);

            if(matrix[mid/c][mid%c]==target)return true;
            if(matrix[mid/c][mid%c]<target)l=mid+1;
            else h=mid-1;
        }
        return false;
    }
};