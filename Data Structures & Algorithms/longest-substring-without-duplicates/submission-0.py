class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        left = ans = 0
        char_dict = {}
        for right in range(len(s)):
            if s[right] not in char_dict:
                char_dict[s[right]] = 1
            else:
                char_dict[s[right]] += 1
            while char_dict[s[right]] > 1:
                char_dict[s[left]] -= 1
                left += 1
            ans = max(ans, right - left + 1)
        return ans