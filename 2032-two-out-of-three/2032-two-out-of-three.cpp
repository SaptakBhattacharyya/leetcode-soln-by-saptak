class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int, int> m1, m2, m3, resMap;
        for (int n : nums1) m1[n] = 1;
        for (int n : nums2) m2[n] = 1;
        for (int n : nums3) m3[n] = 1;
        
        for (auto& p : m1) resMap[p.first] += p.second;
        for (auto& p : m2) resMap[p.first] += p.second;
        for (auto& p : m3) resMap[p.first] += p.second;
        
        vector<int> res;
        for (auto& p : resMap) if (p.second >= 2) res.push_back(p.first);
        return res;
    }
};