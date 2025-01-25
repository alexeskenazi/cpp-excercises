#pragma once
#include <string>
#include <stack>
#include <iostream>
#include <cassert>
using namespace std;



class PlusOne {
    public:
        
        vector<int> plusOne(vector<int>& digits) {
            int carry = 0;
            vector<int> output;
            for(int i = digits.size()-1; i >= 0; --i) {
                
                if(i == digits.size()-1){
                digits[i] = digits[i] + 1;
                }

                digits[i] = digits[i] + carry;

                if(digits[i] == 10){
                    output.insert(output.begin(), 0);
                    carry = 1;
                } else {
                    output.insert(output.begin(), digits[i]);
                    carry = 0;
                }
            }

            if(carry) {
                output.insert(output.begin(), 1);
            }
            return output;
        }

        void checks() {
            vector<int> input;
            vector<int> expectedOutput;
            vector<int> output;

            input = {1,2,3};
            expectedOutput = {1,2,4};
            output = plusOne(input);
            for(int i = 0; i < expectedOutput.size(); i++) {
                assert(expectedOutput[i]==output[i]);
            }
            assert(output==expectedOutput);
            cout << "PlusOne test 1 passed" << endl;


            input = {4,3,2,1};
            expectedOutput = {4,3,2,2};
            output = plusOne(input);
            for(int i = 0; i < expectedOutput.size(); i++) {
                assert(expectedOutput[i]==output[i]);
            }
            assert(output==expectedOutput);
            cout << "PlusOne test 2 passed" << endl;

           
            input = {9};
            expectedOutput = {1,0};
            output = plusOne(input);
            for(int i = 0; i < expectedOutput.size(); i++) {
                assert(expectedOutput[i]==output[i]);
            }
            assert(output==expectedOutput);
            cout << "PlusOne test 3 passed" << endl;
        }
};


// PROMPT:
// Plus One
// You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

// Increment the large integer by one and return the resulting array of digits.
// Example 1:

// Input: digits = [1,2,3]
// Output: [1,2,4]
// Explanation: The array represents the integer 123.
// Incrementing by one gives 123 + 1 = 124.
// Thus, the result should be [1,2,4].
// Example 2:

// Input: digits = [4,3,2,1]
// Output: [4,3,2,2]
// Explanation: The array represents the integer 4321.
// Incrementing by one gives 4321 + 1 = 4322.
// Thus, the result should be [4,3,2,2].
// Example 3:

// Input: digits = [9]
// Output: [1,0]
// Explanation: The array represents the integer 9.
// Incrementing by one gives 9 + 1 = 10.
// Thus, the result should be [1,0].
 

// Constraints:

// 1 <= digits.length <= 100
// 0 <= digits[i] <= 9
// digits does not contain any leading 0's.