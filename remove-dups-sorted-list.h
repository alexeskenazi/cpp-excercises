#pragma once
#include <iostream>
#include <cassert>
#include "utils/linked-list.h"
using namespace std;

class RemoveDuplicatesFromSortedList {


public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current = head;
        while(current!=nullptr){
            if(current->next == nullptr){
                break;
            }
            if(current->val == current->next->val){
                current->next = current->next->next;   
            }
            else{
                current = current->next;
            }
        }  
        return head;
    }

    void checks() {
         
        ListNode* list1 = LinkedList::createLinkedList({1,2,3,3});
        ListNode* expectedOutput = LinkedList::createLinkedList({1,2,3});
        ListNode* output = deleteDuplicates(list1);

        assert(LinkedList::compareLists(output, expectedOutput));
        cout << "RemoveDuplicatesFromSortedList: test 1 passed." << endl;


        list1 = LinkedList::createLinkedList({1,1,2,2,2,3,3,3});
        expectedOutput = LinkedList::createLinkedList({1,2,3});
        output = deleteDuplicates(list1);

        assert(LinkedList::compareLists(output, expectedOutput));
        cout << "RemoveDuplicatesFromSortedList: test 2 passed." << endl;

    }

};


// PROMPT
// Remove Duplicates from Sorted List
// Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

 

// Example 1:


// Input: head = [1,1,2]
// Output: [1,2]
// Example 2:


// Input: head = [1,1,2,3,3]
// Output: [1,2,3]
 

// Constraints:

// The number of nodes in the list is in the range [0, 300].
// -100 <= Node.val <= 100
// The list is guaranteed to be sorted in ascending order.