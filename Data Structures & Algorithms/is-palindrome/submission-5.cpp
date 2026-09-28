class Solution {
public:
    bool isPalindrome(string s) {
        int left{0};
        int right{static_cast<int>(ssize(s) - 1)};

        auto isAlphaNumeric{[](char c) {
            return ('a' <= c && c <= 'z' || '0' <= c && c <= '9' || 'A' <= c && c <= 'Z');
        }};

        while (left < right) {
            while (left < right && !isAlphaNumeric(s[left])) {
                ++left;
            } 
            while (left < right && !isAlphaNumeric(s[right])) {
                --right;
            }

            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }
            ++left;
            --right;
        }

        return true;
    }
};
