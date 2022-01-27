class Solution {
public:
     void merge (vector<int>& nums,int s,int end)
     {   int i=0,j=0;
         int mid=(s+end)/2;
      int l1=mid+1-s;
      int l2=end-mid;
         int* v1 = new int[l1];
    int* v2 = new int[l2];
      int main=s;
         for(int e=0;e<l1;e++)
         {
             v1[e]=nums[main++];
         }
         for(int e=0;e<l2;e++)
         {
             v2[e]=nums[main++];
         }
         int index=s;
         while(i<l1 && j<l2)
         {
             if(v1[i]<v2[j]){nums[index++]=v1[i++];}
             else nums[index++]=v2[j++];
         }
      while(i<l1){
          nums[index++]=v1[i++];
      }
      while(j<l2){
          nums[index++]=v2[j++];
      }
      //return;
     }
    void mergesor(vector<int>& nums,int s,int e)
    {
       if(s>=e){return;}
         int mid=(s+e)/2;
        mergesor(nums,s,mid);
        mergesor(nums,mid+1,e);
        merge(nums,s,e);
        
    }
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        mergesor(nums, 0, n-1);
        return nums;
    }
};