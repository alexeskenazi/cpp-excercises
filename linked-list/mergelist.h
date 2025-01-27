#pragma once
#include <iostream>
#include <cassert>
#include "../utils/linked-list.h"
using namespace std;

class MergeList {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        // Both list are sorted. Insert each item in list1 into the right spot
        // in list2

        ListNode* itemToInsert = list1;
        
        while(itemToInsert!= nullptr){
            
            // Since we are going to remove the item from list1 then 
            // lets keep a pointer to the next itme 
            ListNode* nextval = itemToInsert->next;
            itemToInsert->next = nullptr;

            // Find the right spot to inser the item:
            // Insert it BEFORE the first item with higher value 
            // because this is a singly linked list we need to keep track 
            // of the item before current

            ListNode* current = list2;
            ListNode* prev = nullptr;

            while(current != nullptr){

                if(current->val >= itemToInsert->val) {
                    break;
                }

                prev = current;
                current = current->next;
            }

            // Beggining of list2 
            if(!prev) {
                ListNode* ln = list2;
                list2 = itemToInsert;
                itemToInsert->next = ln;
            }

            // End of list2
            if(!current) {
                prev->next = itemToInsert;
                itemToInsert->next = nullptr;
            }

            // Insert between prev and current
            if(prev && current) {
                itemToInsert->next = current;
                prev->next = itemToInsert;
            }

            itemToInsert = nextval;
        }
       
        return list2;
    }

    void checks() {
        
        ListNode* list1 = LinkedList::createLinkedList({1,2,4});
        ListNode* list2 = LinkedList::createLinkedList({1,3,4});
        ListNode* expectedOutput = LinkedList::createLinkedList({1, 1, 2, 3, 4, 4});

        ListNode* output = mergeTwoLists(list1, list2);

        assert(LinkedList::compareLists(output, expectedOutput));
        cout << "MergeList: test 1 passed." << endl;
    }

};

// PROMPT: Merge Two Sorted Lists
// You are given the heads of two sorted linked lists list1 and list2.
// Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.
// Return the head of the merged linked list.
//
// EXMAPLES:
// Input: list1 = [1,2,4], list2 = [1,3,4]
// Output: [1,1,2,3,4,4]
// Example 2:

// Input: list1 = [], list2 = []
// Output: []
// Example 3:

// Input: list1 = [], list2 = [0]
// Output: [0]
