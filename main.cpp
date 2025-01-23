#include <iostream>
#include <cstring>

#include "valid-parentheses.h"
#include "palindrome-number.h"
#include "mergelist.h"
#include "buy-chocolate.h"
#include "two-sum.h"
#include "length-of-last-word.h"



int main() {

    PalindromeNumber pn;
    pn.checks();

    TwoSum ts;
    ts.checks();

    Chocolate choc;
    choc.checks();

    ValidParentheses vp;
    vp.checks();

    MergeList ml;
    ml.checks();

    LengthOfLastWord lw;
    lw.checks();
  
    return 0;
}

// ...existing code...
