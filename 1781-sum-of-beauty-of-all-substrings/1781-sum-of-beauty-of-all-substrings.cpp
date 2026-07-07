class Solution {
public:
    int beautySum(string s) {
        int ans = 0;
        for (int i = 0;i<s.size();i++){
            unordered_map<char,int> map;

            for (int j=i;j<s.size();j++){
                map[s[j]]++;

                int maxx =0;
                int minn = INT_MAX;

                for(auto it : map){
                    maxx = max(maxx,it.second);
                    minn = min(minn, it.second);

                }
                ans = ans + (maxx - minn);
            }
        }
        return ans;
    }
};