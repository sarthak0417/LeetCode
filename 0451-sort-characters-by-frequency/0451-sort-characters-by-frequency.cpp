class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> m;

        /*        for (char c : s)
                    m[c]++;
        */

        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            m[c]++;
        }

        sort(s.begin(), s.end(), [&](char a, char b) {
            if (m[a] == m[b])
                return a < b;
            return m[a] > m[b];
        });
        return s;
    }
};