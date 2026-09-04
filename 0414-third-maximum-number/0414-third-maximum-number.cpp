class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>rmd(nums.begin(),nums.end()); //123
        while(rmd.size()<3){//false
            return *rmd.rbegin();
        }
        auto i=rmd.rbegin();//3
        *i++;//2
        *i++;//1
        return *i;
    }
};