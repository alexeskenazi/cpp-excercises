#include <iostream>
#include <cstring>

#include "valid-parentheses.h"
#include "palindrome-number.h"
#include "mergelist.h"
#include "buy-chocolate.h"
#include "two-sum.h"
#include "length-of-last-word.h"
#include "roman-to-integer.h"
#include "plus-one.h"
#include "longest-common-prefix.h"
#include "merge-sorted-array.h"
#include "squares-sorted-array.h"
#include "remove-dups-sorted-list.h"
#include "remove-dups-sorted-list2.h"



int main() {

    RemoveDuplicatesFromSortedList rd;
    rd.checks();

    RemoveDuplicatesFromSortedList2 rd2;
    rd2.checks();

    SquaresSortedArray sa;
    sa.checks();

    MergeSortedArray ms;
    ms.checks();

    LongestCommonPrefix lcp;
    lcp.checks();

    PlusOne po;
    po.checks();

    RomanToInteger ri;
    ri.checks();

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
