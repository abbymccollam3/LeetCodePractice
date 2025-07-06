class Solution {
public:
    bool isValid(string s) {

        bool isValid;
        stack<char> stack;

        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                stack.push(c); // adds element onto new stack
            }
            else { // if character is a closing bracket
                //check if stack is empty or if closing brackets match open brackets
                if (stack.empty() 
                    || (c == ')' && stack.top() != '(')
                    || (c == '}' && stack.top() != '{')
                    || (c == ']' && stack.top() != '[') ) {
                        return false;
                    }
                // if it does match, pop off the match
                stack.pop();
            }
        }

        return stack.empty(); // returns true if stack is empty
    }
};
