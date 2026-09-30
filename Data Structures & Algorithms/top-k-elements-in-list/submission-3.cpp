class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for (const auto num: nums) 
            ++map[num];

        vector<vector<int>> bucket(nums.size() + 1);
        for (const auto [key, value]: map) {
            bucket[value].push_back(key);
        }

        vector<int> ans;
        for (int i{static_cast<int>(ssize(bucket) - 1)}; i > 0; --i) {
            for (const auto num: bucket[i]) {
                ans.push_back(num);
                if (ans.size() == k) return ans;
            }
        }

        return ans; 
    }
};
