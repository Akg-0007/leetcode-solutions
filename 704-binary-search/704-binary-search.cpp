class Solution {
public:
    int search(vector<int>& v, int t) {
      int l=0,r=v.size()-1;
       
        while(l<=r){
             int m=(l+r)/2;
        if(v[m]==t)return m;
        else if(v[m]>t)r=m-1;
        else l=m+1;
        }
        return -1;
    }
};