class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n{static_cast<int>(ssize(nums))};
        int prefix = 1;
        vector<int> res(n, 1);
        for (int i{0}; i < n; ++i) {
            res[i] = prefix;
            prefix *= nums[i];
        }

        int postfix = 1;
        for (int i{n - 1}; i >= 0; --i) {
            res[i] *= postfix;
            postfix *= nums[i];
        }

        return res;
    }
};
