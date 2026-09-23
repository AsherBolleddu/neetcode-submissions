class Solution:
    def isValid(self, s: str) -> bool:
        valid = {")": "(", "}": "{", "]":"["}
        stack = []
        for c in s:
            if c in valid:
                if not stack:
                    return False
                if stack.pop() != valid[c]:
                    return False
            else:
                stack.append(c)
        
        if not stack:
            return True
        return False