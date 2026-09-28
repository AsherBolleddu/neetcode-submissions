class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        closeToOpen = {")": "(", "}" : "{", "]": "["}
        for i in range(len(s)):
            if s[i] == "(" or s[i] == "{" or s[i] == "[":
                stack.append(s[i])
            elif s[i] == ")" or s[i] == "}" or s[i] == "]":
                if len(stack) == 0:
                    return False
                else:
                    if closeToOpen[s[i]] != stack.pop():
                        return False
        if len(stack) == 0:
            return True
        else:
            return False