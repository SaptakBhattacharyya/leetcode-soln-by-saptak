class Solution {
public:
    string reversePrefix(string word, char ch) {
        if(word.size()==0) return word;
        if (word.find(ch)!=-1){
            int i = word.find(ch);
            reverse(word.begin(),word.begin()+i+1);
        }
        return word;
    }
};