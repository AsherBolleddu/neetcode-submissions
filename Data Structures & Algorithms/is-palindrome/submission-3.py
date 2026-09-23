class Solution:
    def isPalindrome(self, s: str) -> bool:
        left = 0
        right = len(s) - 1

        while left < right:
            while left < right and not self.isAlphaNumeric(s[left]):
                left += 1
            while right > left and not self.isAlphaNumeric(s[right]):
                right -= 1
            if s[left].lower() == s[right].lower():
                left += 1
                right -= 1
            else:
                return False
        return True

    def isAlphaNumeric(self, c):
        return (
            'A' <= c <= 'Z' or 'a' <= c <= 'z' or '0' <= c <= '9'
        )