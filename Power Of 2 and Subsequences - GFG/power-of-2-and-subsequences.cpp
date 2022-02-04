// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
 bool isP(int n) {
        if(n<0)return false;
        
        int c=__builtin_popcount(n);
        
        if(c==1) return true;
        else
        return false;
    }
    long long numberOfSubsequences(int N, long long A[]){
        // code here 
         int c=0;
       for(int i=0;i<N;i++)
        { 
            if(isP(A[i]))
           { c++;}
        } 
        return (1<<c)-1;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        long long A[N];
        for(int i=0;i<N;++i){
            cin >> A[i];
        }
        Solution ob;
        cout << ob.numberOfSubsequences(N,A) << endl;
    }
    return 0; 
}   // } Driver Code Ends