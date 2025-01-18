#pragma once
#include <string>
#include <stack>
#include <iostream>
using namespace std;

class ValidParentheses {
    public:
        bool isValid(string s) {
            std::stack<char> stack;
            for(int i = 0; i < s.size(); i++ ) {
                if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                    stack.push(s[i]);
                }

                if(s[i] == ')' || s[i] == '}' || s[i] == ']') {
                    if(stack.empty()) {
                        return false;
                    }
                    char c = stack.top();
                    stack.pop();
                    if( (c == '(') && (s[i] != ')'))  {
                        return false;
                    }
                    if( (c == '{') && (s[i] != '}'))  {
                        return false;
                    }
                    if( (c == '[') && (s[i] != ']'))  {
                        return false;
                    }
                }

            }
            return stack.empty();     

        }

        void checks() {
            string s;
            bool expected;

            s = "]";
            expected = false;
            if(isValid(s) == expected) {
                cout << "ValidParentheses: " << s << " : passed" << endl;
            } else {
                cout << "ValidParentheses: " << s << " : failed" << endl;
            }

            s = "[";
            expected = false;
            if(isValid(s) == expected) {
                cout << "ValidParentheses: " << s << " : passed" << endl;
            } else {
                cout << "ValidParentheses: " << s << " : failed" << endl;
            }
            
            s = "()";
            expected = true;
            if(isValid(s) == expected) {
                cout << "ValidParentheses: " << s << " : passed" << endl;
            } else {
                cout << "ValidParentheses: " << s << " : failed" << endl;
            }
            
            s = "()()";
            expected = true;
            if(isValid(s) == expected) {
                cout << "ValidParentheses: " << s << " : passed" << endl;
            } else {
                cout << "ValidParentheses: " << s << " : failed" << endl;
            }


            s = "(){}";
            expected = true;
            if(isValid(s) == expected) {
                cout << "ValidParentheses: " << s << " : passed" << endl;
            } else {
                cout << "ValidParentheses: " << s << " : failed" << endl;
            }


            s = "(){}[]";
            expected = true;
            if(isValid(s) == expected) {
                cout << "ValidParentheses: " << s << " : passed" << endl;
            } else {
                cout << "ValidParentheses: " << s << " : failed" << endl;
            }


            s = "(){((()))}[]";
            expected = true;
            if(isValid(s) == expected) {
                cout << "ValidParentheses: " << s << " : passed" << endl;
            } else {
                cout << "ValidParentheses: " << s << " : failed" << endl;
            }


            s = "(";
            expected = false;
            if(isValid(s) == expected) {
                cout << "ValidParentheses: " << s << " : passed" << endl;
            } else {
                cout << "ValidParentheses: " << s << " : failed" << endl;
            }


            s = "(]";
            expected = false;
            if(isValid(s) == expected) {
                cout << "ValidParentheses: " << s << " : passed" << endl;
            } else {
                cout << "ValidParentheses: " << s << " : failed" << endl;
            }

        }
};

// PROMPT:
// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.
 

// Example 1:
// Input: s = "()"
// Output: true

// Example 2:
// Input: s = "()[]{}"
// Output: true

// Example 3:
// Input: s = "(]"
// Output: false

// Example 4:
// Input: s = "([])"
// Output: true

// Constraints:

// 1 <= s.length <= 104
// s consists of parentheses only '()[]{}'.