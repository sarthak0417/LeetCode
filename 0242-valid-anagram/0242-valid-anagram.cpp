class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char,int> mapA;
        std::unordered_map<char,int> mapB;

        for(const auto &element: s){
            mapA[element]++;
        }
        for(const auto &element: t){
            mapB[element]++;
        }
        return mapA == mapB;
        
    }
};