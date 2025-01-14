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
            expected = true;
            if(isValid(s) == expected) {
                cout << s << " : passed" << endl;
            }

            s = "[";
            expected = true;
            if(isValid(s) == expected) {
                cout << s << " : passed" << endl;
            }
            
            s = "()";
            expected = true;
            if(isValid(s) == expected) {
                cout << s << " : passed" << endl;
            }
            
            s = "()()";
            expected = true;
            if(isValid(s) == expected) {
                cout << s << " : passed" << endl;
            }


            s = "(){}";
            expected = true;
            if(isValid(s) == expected) {
                cout << s << " : passed" << endl;
            }


            s = "(){}[]";
            expected = true;
            if(isValid(s) == expected) {
                cout << s << " : passed" << endl;
            }


            s = "(){((()))}[]";
            expected = true;
            if(isValid(s) == expected) {
                cout << s << " : passed" << endl;
            }


            s = "(";
            expected = false;
            if(isValid(s) == expected) {
                cout << s << " : passed" << endl;
            }


            s = "(]";
            expected = false;
            if(isValid(s) == expected) {
                cout << s << " : passed" << endl;
            }

        }
};