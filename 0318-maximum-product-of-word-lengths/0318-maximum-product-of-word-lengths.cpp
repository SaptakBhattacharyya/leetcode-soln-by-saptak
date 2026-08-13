class Solution {
public:
    int maxProduct(vector<string>& words) {
        int ans = 0;
        int n = words.size();
        vector<set<char>> chars(n);
        for (int i = 0; i < n; i++) {
            for (char ch : words[i]) {
                chars[i].insert(ch);
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                bool common = false;

                for (char ch : chars[i]) {
                    if (chars[j].count(ch)) {
                        common = true;
                        break;
                    }
                }

                if (!common) {
                    ans = max(ans, (int)words[i].size() * (int)words[j].size());
                }
            }
        }

        return ans;
    }
};