class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        string ans ="";

        reverse(s.begin(),s.end());

        for(int i=0;i<n;i++){
            string word="";
            while(i<n && s[i]!=' '){
                word+=s[i];
                i++;
            }

            reverse(word.begin(),word.end());
            if(word.length()>0){
                ans+=" "+word;
            }
        }
        return ans.substr(1);
    }
};



/*

#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s; getline(cin,s);

    vector<string> words;
    string word = " ";

    for (int i=0; i<s.length(); i++) {
        if(s[i] !=' '){
            word += s[i];
        }
        else if(!word.empty()){
            words.push_back(word);
            word = " ";
        }
    }

    if(!word.empty()){
        words.push_back(word);
    }
    
    for(int i=words.size()-1;i>0;i--){
        cout<<word[i]<< " ";
    }
    return 0;
}

*/