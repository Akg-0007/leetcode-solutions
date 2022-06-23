#include <bits/stdc++.h>
using namespace std;
void rev(vector<int> &v, int n){
   int l =0;
   int h= n-1;
   while(l<=h){
       swap(v[l], v[h]);
       l++;
       h--;
   }
   
}
int main() {
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v (n);
    for(int i =0; i<n;i++) cin>>v[i];
    rev(v,n);
    for(auto i : v) cout<<i<<" ";
    cout<<endl;
}
return 0;
}