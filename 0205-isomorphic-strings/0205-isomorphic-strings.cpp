class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> mapS(256, -1); //arrays
        vector<int> mapT(256, -1);

        for (int i = 0; i < s.size(); i++) {
            if (mapS[s[i]] != mapT[t[i]]) //s[i]='e' or 'a'
                return false;

            mapS[s[i]] = i; //s[i]='e' or 'a'
            mapT[t[i]] = i;
        }
        return true;
    }
};