class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int n =x;
        long long reverseNum=0;
    
        while(n>0){
            int d =n%10;
            reverseNum = reverseNum*10+d;
            n=n/10;
        }
        return reverseNum ==x;
    }
};