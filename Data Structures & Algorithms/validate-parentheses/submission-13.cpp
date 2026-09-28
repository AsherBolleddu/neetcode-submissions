class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> matches{{'}', '{'}, {']', '['}, {')', '('}};
        stack<char> stack;

        for (const char c: s) {
            if (matches.contains(c)) {
                if (stack.empty()) return false;
                else if (matches[c] != stack.top()) return false;
                else stack.pop();
            } else 
                stack.push(c);
        }

        return stack.empty();
    }
};
