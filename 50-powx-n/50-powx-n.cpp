class Solution {
public:
    double myPow(double x, int n) {
    long long nn=n;
        double ans=1.0;
        if(n<0)nn=nn*-1;
        while(nn)
        {
            if(nn%2==0)
            {
                x=x*x;
                nn=nn/2;
            }
            else {
                ans*=x;
                nn=nn-1;
            }
        }
        if(n<0)ans=double( 1.0)/double(ans);
        return ans;

    }
};