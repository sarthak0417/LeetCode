class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1, 0);

        for (int i = 1; i <= n; i++) {       
            int half = i >> 1; // shift right by one place and the digit will be half(always true)
            int lastBit = i & 1;

            ans[i] = ans[half] + lastBit;
        }
        return ans;
    }
};