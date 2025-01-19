#pragma once
#include <string>
#include <stack>
#include <iostream>
#include <cassert>
using namespace std;


class LengthOfLastWord {
    public:
        
        int lengthOfLastWord(string s) {
            int output = 0;

            return output;
        }

        void checks() {
            string input;
            int expectedOutput;
            int output;

            input = "Hello World";
            expectedOutput = 5;
            output = lengthOfLastWord(input);
            assert(output==expectedOutput);
            cout << "LengthOfLastWord: test 1 passed." << endl;


            input = "   fly me   to   the moon  ";
            expectedOutput = 4;
            output = lengthOfLastWord(input);
            assert(output==expectedOutput);
            cout << "LengthOfLastWord: test 2 passed." << endl;


            input = "luffy is still joyboy";
            expectedOutput = 6;
            output = lengthOfLastWord(input);
            assert(output==expectedOutput);
            cout << "LengthOfLastWord: test 3 passed." << endl;

           
        }
};




// 58. Length of Last Word
// Easy
// Topics
// Companies
// Given a string s consisting of words and spaces, return the length of the last word in the string.

// A word is a maximal 
// substring
//  consisting of non-space characters only.

 

// Example 1:

// Input: s = "Hello World"
// Output: 5
// Explanation: The last word is "World" with length 5.
// Example 2:

// Input: s = "   fly me   to   the moon  "
// Output: 4
// Explanation: The last word is "moon" with length 4.
// Example 3:

// Input: s = "luffy is still joyboy"
// Output: 6
// Explanation: The last word is "joyboy" with length 6.
 

// Constraints:

// 1 <= s.length <= 104
// s consists of only English letters and spaces ' '.
// There will be at least one word in s.