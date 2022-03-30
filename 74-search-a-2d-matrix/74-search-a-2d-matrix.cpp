class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     int rows = matrix.size();
int column = matrix[0].size();
for(int i = 0 ; i < rows ; i++){
if(matrix[i][0]<=target && matrix[i][column-1]>=target){
int left = 0 , right = column-1,mid=0;
while(left<=right){
mid = left+ (right-left)/2;
if(matrix[i][mid]==target)return true ;
else if(matrix[i][mid]>target)right = mid-1;
else if(matrix[i][mid]<target)left=mid+1;
}
return false ;
}
}
return false ;
 
    }
};