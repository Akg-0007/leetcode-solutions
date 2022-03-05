class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
       int n=nums.size();
        int sum[10005]={0};
        int dp[10005];
        //memset(sum,0,sizeof(sum));
        for(int i=0;i<n;i++)
        {
            sum[nums[i]]+=nums[i];
        }
        dp[1]=sum[1];
        dp[2]=max(sum[1],sum[2]);
        for(int i=3;i<10005;i++)
        {
            dp[i]=max(dp[i-2]+sum[i],dp[i-1]);
        }
       return max(dp[10003],dp[10004]);
    }
};