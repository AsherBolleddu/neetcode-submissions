class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left{0};
        int right{static_cast<int>(ssize(numbers)) - 1};

        vector<int> ans(2);
        while (left < right) {
            int sum{numbers[left] + numbers[right]};
            if (sum > target) {
                --right;
            } else if (sum < target) { 
                ++left;
            }
            else {
                ans[0] = left + 1;
                ans[1] = right + 1;
                break;
            }
        }

        return ans;
    }
};
