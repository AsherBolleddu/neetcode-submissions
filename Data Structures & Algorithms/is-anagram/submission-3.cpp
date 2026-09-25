class Solution {
public:
    unordered_map<char, int> buildMap (string s) {
        unordered_map<char, int> map;
        for (const char c: s) 
            ++map[c];

        return map;
    }

    bool isAnagram(string s, string t) {
        return buildMap(s) == buildMap(t);
    }
};
