class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<0)return false;
        
        int c=__builtin_popcount(n);
        
        if(c==1) return true;
        else
        return false;
    }
};