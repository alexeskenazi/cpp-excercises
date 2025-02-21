#include <iostream>
#include <cstring>

#include "utils/linked-list.h"
#include "valid-parentheses.h"
#include "palindrome-number.h"
#include "linked-list/mergelist.h"
#include "buy-chocolate.h"
#include "two-sum.h"
#include "length-of-last-word.h"
#include "roman-to-integer.h"
#include "plus-one.h"
#include "longest-common-prefix.h"
#include "merge-sorted-array.h"
#include "squares-sorted-array.h"
#include "linked-list/remove-dups-sorted-list.h"
#include "linked-list/remove-dups-sorted-list2.h"
#include "kItemsWithMaximumSum.h"
#include "count-odds.h"
#include "has-trailing-zeros.h"
#include "binary-tree-preorder.h"

int main() {

    BinaryTreePreorderTraversal bt;
    bt.checks();

    HasTrailingZeros htz;
    htz.checks();

    CountOdds co;
    co.checks();

    KItemsWithMaximumSum ki;
    ki.checks();    

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

    testCreateLinkedList();
    testCompareLists();
  
    return 0;
}

// ...existing code...
