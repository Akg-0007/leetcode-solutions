class Solution {
public:
    int search(vector<int>& nums, int target) {
     int l=0,h=nums.size()-1  ;
        while(l<=h)
        {
           int  mid=(l+h)/2;
            if(nums[mid]<target)l=mid+1;
            else if(target<nums[mid])h=mid-1;
            if(nums[mid]==target){return mid;}

        }
        return -1;
    }
};


// int n = nums.size()-1;
//         int low = 0, high = n;
//         while( low <= high){
//             int mid = low + (high-low)/2;
//             if (nums[mid] == target) return mid;
//             else if (nums[mid] > target) high = mid -1;
//             else low = mid + 1;
//         }
//         return -1;