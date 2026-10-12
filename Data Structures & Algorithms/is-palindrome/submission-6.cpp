class Solution {
public:
    bool isPalindrome(string s) {
        auto isAlphaNumeric{[](char c) {
            return ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') || ('0' <= c && c <= '9');
        }};

        int l{0};
        int r{static_cast<int>(ssize(s)) - 1};

        while (l < r) {
            while (l < r && !isAlphaNumeric(s[l]))
                ++l;
            while (l < r && !isAlphaNumeric(s[r]))
                --r;
            if (tolower(s[l]) != tolower(s[r])) 
                return false;
            ++l;
            --r;
        }

        return true;
    }
};
