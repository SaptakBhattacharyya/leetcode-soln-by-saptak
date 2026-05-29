class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> m;
        for (char c : s) m[c]++;
        int count = m[s[0]];
        for (auto p : m) {
            if (p.second != count) return false;
        }
        return true;
    }
};