#pragma once
#include <string>
#include <stack>
#include <iostream>
#include <cassert>
using namespace std;



class SquaresSortedArray {
    public:
        
        vector<int> sortedSquares(vector<int>& nums) {
            int temp = 0;
            for(int i = 0; i<nums.size(); ++i){
                nums[i] = nums[i] * nums[i];
            }
            for(int i = 0; i<nums.size()-1; ++i){
                for(int j = 0; j<nums.size()-1; ++j){
                    if(nums[j] > nums[j+1]){
                        temp = nums[j+1];
                        nums[j+1] = nums[j];
                        nums[j] = temp;  
                    }
                }
            }
            return nums;
        }

        void checks() {
            vector<int> input;
            vector<int> exptectedOutput;
            
            input = {-4,-1,0,3,10};
            exptectedOutput = {0,1,9,16,100};

            sortedSquares(input);

            for(int i = 0; i < input.size(); i++) {
                assert(input[i]==exptectedOutput[i]);
            }
            cout << "MergeSortedArray: test 1 passed" << endl;



            input = {-7,-3,2,3,11};
            exptectedOutput = {4,9,9,49,121};

            sortedSquares(input);

            for(int i = 0; i < input.size(); i++) {
                assert(input[i]==exptectedOutput[i]);
            }
            cout << "MergeSortedArray: test 2 passed" << endl;



            

        }
};


// PROMPT:
// Squares of a Sorted Array
// Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
// Example 1:

// Input: nums = [-4,-1,0,3,10]
// Output: [0,1,9,16,100]
// Explanation: After squaring, the array becomes [16,1,0,9,100].
// After sorting, it becomes [0,1,9,16,100].
// Example 2:

// Input: nums = [-7,-3,2,3,11]
// Output: [4,9,9,49,121]
 

// Constraints:

// 1 <= nums.length <= 104
// -104 <= nums[i] <= 104
// nums is sorted in non-decreasing order.
