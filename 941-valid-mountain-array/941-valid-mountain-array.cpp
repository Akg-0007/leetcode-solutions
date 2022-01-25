class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        int i=0,j=n-1;
        if(n<3 || arr[0]>arr[1])return false;
       while(i<n-1&&arr[i]<arr[i+1]){
            i++;
        }
        while(j>0&&arr[j]<arr[j-1]){
            j--;
        }
        return (i==j && j<n-1 && i>0);
    }
};