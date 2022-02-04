class Solution {
public:
    int op(int n){
        if(n%4==0)return n;
        if(n%4==1)return 1;
        if(n%4==2)return n+1;
        if(n%4==3)return 0;
        return 0;
        
    }
    int xorOperation(int n, int start) {
        return 2*(op(start/2 +n-1)^op(start/2-1))|(start&n&1);
        
        //return 2*(f(start/2+n-1)^f(start/2-1))|(start&n&1);
    }
};