#pragma once
#include <string>
#include <stack>
#include <iostream>
#include <cassert>
using namespace std;


class TwoSum {
    public:
        
        public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> outPut;
            for(int i = 0; i < nums.size(); ++i) {
                for(int j = 0; j < nums.size(); ++j) {
                    if(nums[i] + nums[j] == target && i !=j){
                        outPut.push_back(i);
                        outPut.push_back(j);
                        return outPut;
                    } 
                }
            }
            return nums;
        }

        void checks() {

            vector<int> nums ; // Input array
            int target;
            vector<int> expectedOutput; // Expected output array
            vector<int> output; 

            // Test 1
            nums = {2,7,11,15}; // Input array
            target = 9;
            expectedOutput = {0,1}; // Expected output array
            output = twoSum(nums, target);


            for (int i = 0; i < expectedOutput.size(); i++) {
                assert(output[i] == expectedOutput[i]);
            }
            cout << "two-sum: test 1 passed" << endl;


            // Test 2
            nums = {3,2,4}; // Input array
            target = 6;
            expectedOutput = {1,2}; // Expected output array
            output = twoSum(nums, target);


            for (int i = 0; i < expectedOutput.size(); i++) {
                assert(output[i] == expectedOutput[i]);
            }
            cout << "two-sum: test 2 passed" << endl;


            // Test 3
            nums = {3,3}; // Input array
            target = 6;
            expectedOutput = {0,1}; // Expected output array
            output = twoSum(nums, target);


            for (int i = 0; i < expectedOutput.size(); i++) {
                assert(output[i] == expectedOutput[i]);
            }
            cout << "two-sum: test 3 passed" << endl;

        }
};

// PROMPT:
// 1. Two Sum
// Solved
// Easy
// Topics
// Companies
// Hint
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

 

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

// Example 2:
// Input: nums = [3,2,4], target = 6
// Output: [1,2]

// Example 3:
// Input: nums = [3,3], target = 6
// Output: [0,1]
 

// Constraints:

// 2 <= nums.length <= 104
// -109 <= nums[i] <= 109
// -109 <= target <= 109
// Only one valid answer exists.