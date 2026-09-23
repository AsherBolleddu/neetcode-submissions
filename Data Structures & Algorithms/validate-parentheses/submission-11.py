class Solution:
    def isValid(self, s: str) -> bool:
        temp = {")": "(", "]": "[", "}": "{"} 
        stack = []
        for char in s:
            if char not in temp:
                stack.append(char)
            else:
                if len(stack) == 0:
                    return False
                if temp[char] != stack.pop():
                    return False

        if len(stack) == 0:
            return True
        else:
            return False