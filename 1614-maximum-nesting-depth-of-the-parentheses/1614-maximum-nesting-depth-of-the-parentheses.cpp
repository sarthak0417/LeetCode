/*
class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int ans=0;

        for (char ch:s){
            if(ch=='('){
                st.push(ch);
                ans = max(ans,(int)st.size());
            } else if (ch==')'){
                st.pop();
            }
        }
        return ans;
    }
};
*/

class Solution {
public:
    int maxDepth(string s) {
        int currentDepth = 0;
        int maxDepth=0;

        for (char ch:s){
            if(ch=='('){
                currentDepth++;
                maxDepth=max(maxDepth,currentDepth);
            }else if(ch==')'){
                currentDepth--;
            }
        }
        return maxDepth;
    }
};
