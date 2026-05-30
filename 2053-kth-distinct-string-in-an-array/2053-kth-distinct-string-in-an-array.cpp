class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        multiset<string> ms(arr.begin(),arr.end());
        for(string s:arr){
            if(ms.count(s)==1&&--k==0){
                return s;
            }
        }
        return "";
    }
};