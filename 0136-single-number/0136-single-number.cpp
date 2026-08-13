class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int ,int>freq;
        for(int num:nums){
           freq[num]++;
        }
        for(auto m:freq){
            if(m.second==1){
                return m.first;
            }
        }
        return 1;
    }
};