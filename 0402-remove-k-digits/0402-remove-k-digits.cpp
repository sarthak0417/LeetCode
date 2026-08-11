class Solution {
public:
    string removeKdigits(string num, int k) {
        string st;

        for (char c : num) {
            while (!st.empty() && k > 0 && st.back() > c) {
                st.pop_back();
                k--;
            }
            st.push_back(c);
        }

        // Remove remaining digits from the end
        while (k > 0) {
            st.pop_back();
            k--;
        }

        // Remove leading zeros
        int i = 0;
        while (i < st.size() && st[i] == '0')
            i++;

        string ans = st.substr(i);

        return ans.empty() ? "0" : ans;
    }
};

/*
class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        stack<char> st;

        for (int i = 0; i < n; i++) {
            while (!st.empty() && k > 0 &&
                   (st.top() - num[i]) > (num[i] - num[i])) {
                st.pop();
                k = k - 1;
            }
            st.push(num[i]);
        }
        while (k > 0) {
            st.pop();
            k--;
        }
        if (st.empty()) {
            return "0";
        }

        string res = "";

        while (!st.empty()) {
            res = res + st.top();
            st.pop();
        }
        int i=0;
        while (res.size() > 0 && res.back() == '0') {
            res.pop_back();
        }
        reverse(res.begin(), res.end());

        if (res.empty())
            return "0";
        else
            return res;
    }
};
*/