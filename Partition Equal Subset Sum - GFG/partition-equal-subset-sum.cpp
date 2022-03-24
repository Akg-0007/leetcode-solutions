// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        int sum = 0;
         for(int i=0;i < N;i++)
         {
             sum += arr[i];
         }
         if(sum % 2 != 0)
         {
             return 0;
         }
         
         int no = sum / 2;
         bool dp[N+1][no + 1];
         
         for(int i = 0;i <= N;i++)
         {
             for(int j=0;j <= no;j++)
             {
                 if(i == 0)
                 {
                     dp[i][j] = false;
                 }
                 
                 if(j == 0)
                 {
                     dp[i][j] = true;
                 }
             }
         }
         
         for(int i=1;i <= N;i++)
         {
             for(int j=1;j <= no;j++)
             {
                 if(arr[i - 1] <= j)
                 {
                     dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
                 }
                 else
                 {
                     dp[i][j] = dp[i -1][j];
                 }
             }
         }
         
         if(dp[N][no] == true)
         {
             return 1;
         }
         
         return 0;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends