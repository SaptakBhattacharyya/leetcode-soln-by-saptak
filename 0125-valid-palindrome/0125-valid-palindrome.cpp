class Solution {
public:
    bool isPalindrome(string s) {
        string p;
        for(char c:s){
            if(isalnum(c)){
                p+= tolower(c);
            }
        }
        int l=0;
        int r=p.size()-1;
        while(l<r){
            if(p[l]!=p[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};