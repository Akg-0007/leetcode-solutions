class Solution {
public:
    bool detectCapitalUse(string word) {
        int count=0;
        for(char i:word)
         if(isupper(i))count++;
        if(count==0 or count==word.size() or (count==1 and isupper(word[0])))return true;
        else return false;
           
        
        
        
       }
};