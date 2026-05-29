class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> m;
        stringstream ss(s1 + " " + s2);
        string w;
        while (ss >> w) m[w]++;
        vector<string> res;
        for (auto& p : m) {
            if (p.second == 1) res.push_back(p.first);
        }
        return res;
    }
};