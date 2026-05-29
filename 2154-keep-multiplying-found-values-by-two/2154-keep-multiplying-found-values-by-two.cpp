class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_map<int, bool> m;
        for (int n : nums) m[n] = true;
        while (m.count(original)) original *= 2;
        return original;
    }
};