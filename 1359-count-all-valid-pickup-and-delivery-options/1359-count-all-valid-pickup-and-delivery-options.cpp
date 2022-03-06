class Solution {
public:
    #define mod 1000000007
    int countOrders(int n) {
        // if(n==0)return 1;
        // long long a=(long long)n*(2*n-1)%mod;
        // a*=countOrders(n-1)%mod;
        // return (int)a;
        long dp=1;
	for(int i=2; i<=n; i++)
		dp = dp*(i*(2*i-1))%mod;
	return dp;
    }
};