class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map; // val: idx
        vector<int> ans(2);
        for (size_t i{0}; i < nums.size(); ++i) {
            int diff{target - nums[i]};
            if (map.contains(diff)) {
                ans[0] = map[diff];
                ans[1] = i;
                break;
            }
            map[nums[i]] = i;
        }

        return ans;
    }
};
