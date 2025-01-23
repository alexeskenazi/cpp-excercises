#pragma once
#include <string>
#include <stack>
#include <iostream>
#include <cassert>
using namespace std;



class PalindromeNumber {
    public:
        
        bool isPalindrome(int x) {
            char buffer[50];
            int len = snprintf(buffer, sizeof(buffer), "%d", x);
            for(int i = 0; i < len; ++i){


                if(buffer[i] != buffer[len - i - 1]){
                    return false;
                }
            }
            return true;
        }

        void checks() {
            int input = 0;
            bool expectedOutput = false;
            bool output = false;

            input = 121;
            expectedOutput = true;
            output = isPalindrome(input);
            assert(output==expectedOutput);
            cout << "PalindromeNumber test 1 passed: " << input << endl;

            input = -121;
            expectedOutput = false;
            output = isPalindrome(input);
            assert(output==expectedOutput);
            cout << "PalindromeNumber test 2 passed: " << input << endl;


            input = 10;
            expectedOutput = false;
            output = isPalindrome(input);
            assert(output==expectedOutput);
            cout << "PalindromeNumber test 3 passed: " << input << endl;

           
        }
};


// PROMPT:
// Palindrome Number
// Solved
// Easy
// Topics
// Companies
// Hint
// Given an integer x, return true if x is a 
// palindrome
// , and false otherwise.

 

// Example 1:

// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.
// Example 2:

// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
// Example 3:

// Input: x = 10
// Output: false
// Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 

// Constraints:

// -231 <= x <= 231 - 1
