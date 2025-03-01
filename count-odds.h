#pragma once
#include <string>
#include <stack>
#include <iostream>
#include <cassert>
using namespace std;



class CountOdds {
    public:
        
    int countOdds(int low, int high) {
        int finalOdd = 0;
        while(low <= high){
            if(low % 2 == 1){
                finalOdd++;
                
            }
            low++;
        }
      return finalOdd;
    }

    void checks() {
        
        int low = 3;
        int high = 7;
        int expectedOutput = 3;
        int output = countOdds(low, high);
        assert(output==expectedOutput);
        cout << "CountOdds: test 1 passed." << endl;

        low = 8, high = 10;
        expectedOutput = 1;
        output = countOdds(low, high);
        assert(output==expectedOutput);
        cout << "CountOdds: test 2 passed." << endl;
        
    }
};

// Count Odd Numbers in an Interval Range
// Hint
// Given two non-negative integers low and high. Return the count of odd numbers between low and high (inclusive).

 

// Example 1:

// Input: low = 3, high = 7
// Output: 3
// Explanation: The odd numbers between 3 and 7 are [3,5,7].
// Example 2:

// Input: low = 8, high = 10
// Output: 1
// Explanation: The odd numbers between 8 and 10 are [9].
 

// Constraints:

// 0 <= low <= high <= 10^9