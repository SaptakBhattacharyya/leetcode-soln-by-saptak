class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        int res = 0;
        for (int n : nums) {
            res += m[n - k] + m[n + k];
            m[n]++;
        }
        return res;
    }
};