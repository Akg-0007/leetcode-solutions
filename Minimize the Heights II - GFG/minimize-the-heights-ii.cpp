// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
         int l,s,c=arr[n-1]-arr[0];
         for(int i=0;i<n-1;i++)
         {
             int s=min(arr[0]+k,arr[i+1]-k);
             int l=max(arr[n-1]-k,arr[i]+k);
             if(s<0)continue;
             c=min(c,l-s);
         }
        // int i=0,j=n-1;
        // int c=(arr[j]-k)-(arr[0]+k);
        return c;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends