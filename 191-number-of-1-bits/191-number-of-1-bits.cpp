class Solution {
public:
    int hammingWeight(uint32_t n) {
       // return __builtin_popcount(n);
        int c=0;
        while(n){
            if(n&1==1)c++;
            n>>=1;
        }    
        
        return c;
    }
};