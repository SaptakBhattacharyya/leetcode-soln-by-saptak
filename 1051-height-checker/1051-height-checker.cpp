class Solution {
public:
    int heightChecker(vector<int>& hgts) {
        multiset<int> ex(hgts.begin(),hgts.end());
        int diff=0, i=0;
        for(int h:ex){
            if(h!=hgts[i++]){
                diff++;
            }
        }
        return diff;
    }
};