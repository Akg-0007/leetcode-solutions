class Solution {
public:
    bool isp(string s)
    {
        string p = s;
 

    reverse(p.begin(), p.end());
    if (s==p) {
        return true;
    }

    else {
        return false;
    } 
    }
    int removePalindromeSub(string s) {
       if(s.length()==0)return 0;
        if(isp(s))return 1;
        else return 2;
        
    }
};