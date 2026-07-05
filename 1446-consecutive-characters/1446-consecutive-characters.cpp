class Solution {
public:
    int maxPower(string s) {
        int left =0; // two pointers approach
        int ans=1;
        
        for(int right =1;right<s.size();right++){
            if(s[right] != s[right -1]){
                ans = max(ans,right-left);
                left = right;
            }
        }
        ans = max(ans,(int)s.size()-left);
        return ans;
    }

};

/*
class Solution {
public:
    int maxPower(string s) {
        int count =1;
        int ans = 1;

        for(int i =1; i < s.size(); i++){
            if(s[i]==s[i-1]) count++;
            else count =1;
            ans = max(count,ans);
        }
    return ans;
    }
};
*/