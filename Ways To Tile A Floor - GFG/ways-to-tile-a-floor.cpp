// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  
    long long shiv(long long n,long long dp[]){
        if(n==1 || n==0)return dp[n]=1;
      if(dp[n]!=-1){return dp[n];}
      
     dp[n]=(shiv(n-1,dp)+shiv(n-2,dp))%1000000007;
     return dp[n];
    }
    long long numberOfWays(long long n) {
        //code here
        long long dp[n+1];
         memset(dp,-1,sizeof dp );
        shiv(n,dp);
        return dp[n]; 
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.numberOfWays(N) << endl;
    }
    return 0;
}  // } Driver Code Ends