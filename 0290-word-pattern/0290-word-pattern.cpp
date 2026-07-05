class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words; //created vector to store word
        string temp;
        stringstream ss(s);

        while (ss >> temp) // split the sentance; one by one will push the words in it
            words.push_back(temp);

        if(words.size() != pattern.size()) // checking for length
            return false;

        unordered_map<char,string> mp;

        for(int i=0;i<pattern.size();i++){
            char ch = pattern[i]; // ch = 'a'

            if(mp.count(ch)){ //checking if ch already exists
                if (mp[ch] != words[i]) return false;
            } else {
                for(auto x:mp){// checking wheather this word is already assigned 
                    if(x.second==words[i]) return false;
                }
                mp[ch]=words[i];
            }
        }
        return true;
    }
};