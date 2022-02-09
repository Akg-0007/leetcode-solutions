// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int shiv(int n,int dp[]){
     if(n==1 || n==0)return dp[n]=1;
      if(dp[n]!=-1){return dp[n];}
      
     dp[n]=(shiv(n-1,dp)+shiv(n-2,dp))%1000000007;
     return dp[n];
    }
    int countWays(int n)
    {
        // your code here
      int dp[n+1];
      memset(dp,-1,sizeof dp );
      shiv(n,dp);
      return dp[n];
    }
};



// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}
  // } Driver Code Ends