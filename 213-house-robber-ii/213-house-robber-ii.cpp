class Solution {
public:
  int solve(vector<int>&nums,int start,int end)
  {
      int n=nums.size();
      int dp[n];
      memset(dp,0,sizeof(dp));
      dp[start]=nums[start];
      dp[start+1]=max(nums[start],nums[start+1]);
      for(int i=start+2;i<=end;i++)
        dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
    return dp[end];
  }
    int rob(vector<int>& nums) {
      int n=nums.size();
      if(n==1)
        return nums[0];
      else if(n==2)
        return max(nums[0],nums[1]);
      int k=solve(nums,0,n-2);
      int p=solve(nums,1,n-1);
      return max(k,p);
    }
};