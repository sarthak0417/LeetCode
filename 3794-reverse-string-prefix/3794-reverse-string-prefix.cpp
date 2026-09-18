class Solution {
public:
    string reversePrefix(string s, int k) {
//        cin >> s >> k;
        reverse(s.begin(),s.begin() + k);
//        cout << s;  
        return s;
    }
};