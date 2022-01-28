class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
         string res="";
        for(int i=0,j=0;i<s.length();i++){
            if(j<spaces.size() and i==spaces[j]){
                res+=" ";
                j++;
                i--;
                continue;
            }
            res+=s[i];
            
        }
        s=res;
        return s;
    }
};