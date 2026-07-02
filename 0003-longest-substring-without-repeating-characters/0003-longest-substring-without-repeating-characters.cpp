class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> hash(256,-1);
        int n = s.size();
        int left = 0;
        int right = 0;
        int max_length = 0;

    while(right<n){
        if (hash[s[right]] != -1){
            if(hash[s[right]]>=left){
                left=hash[s[right]]+1;
            }
        }
    int length = right-left+1;
    max_length = max(length,max_length);

    hash[s[right]]=right;
    right++;
    }
    return max_length;

    }
};