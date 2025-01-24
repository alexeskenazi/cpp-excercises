#pragma once
#include <string>
#include <stack>
#include <iostream>
#include <cassert>
using namespace std;



class LongestCommonPrefix {
    public:
        
        string longestCommonPrefix(vector<string>& strs) {
            string output;
            string word = strs[0];
            for(int i = 0; i<word.size(); ++i){
                char c = word[i];
                for(int j = 0; j < strs.size(); ++j){
                    string word2 = strs[j];
                    char c2 = word2[i];
                    if(c != c2 ) {
                        return output;
                    }
                }
                output = output + c;
            }
            return output;
        }

        void checks() {
            vector<string> input;
            string expectedOutput;
            string output;

            input = {"flower","flow","flight"};
            expectedOutput = "fl";
            output = longestCommonPrefix(input);
            assert(output==expectedOutput);
            cout << "LongestCommonPrefix test 1 passed" << endl;

            input = {"dog","racecar","car"};
            expectedOutput = "";
            output = longestCommonPrefix(input);
            assert(output==expectedOutput);
            cout << "LongestCommonPrefix test 2 passed" << endl;


        }
};



// PROMPT
// Longest Common Prefix
// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

 

// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.
 

// Constraints:

// 1 <= strs.length <= 200
// 0 <= strs[i].length <= 200
// strs[i] consists of only lowercase English letters if it is non-empty.