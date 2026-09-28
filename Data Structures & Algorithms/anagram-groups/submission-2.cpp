class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        for (auto& word: strs) {
            string chars(26, '\0');
            for (const auto c: word)
                ++chars[c - 'a'];
            map[chars].push_back(move(word));
        }

        vector<vector<string>> ans;
        ans.reserve(map.size());
        for (auto& [key, value]: map)
            ans.push_back(move(value));

        return ans;
    }
};
