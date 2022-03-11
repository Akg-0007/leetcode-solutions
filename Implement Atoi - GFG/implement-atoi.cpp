// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
       int a=0;
       int s=1,i=0;
       if(str[i]=='-'){s=-1;i++;}
       for( i;i<str.length();i++)
       {
           if(!(str[i]-'0'>=0 && str[i]-'0'<=9))return -1;
           else {a=str[i]-'0'+ a*10;}
           
    }
    return a*s;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends