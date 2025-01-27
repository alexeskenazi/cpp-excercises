#pragma once
#include <iostream>
#include <cassert>
#include "../utils/linked-list.h"
using namespace std;

class RemoveDuplicatesFromSortedList2 {

public:
    ListNode* deleteDuplicates(ListNode* head) {

        // Find the values to delete
        vector<int> valuesToDelete;
        ListNode* current = head;
        while(current!=nullptr){
            if(current->next == nullptr){
                break;
            }
            if(current->val == current->next->val) {
                valuesToDelete.push_back(current->val);
            }

            current = current->next;

        }

        // delete the nodes
        for(int i = 0; i < valuesToDelete.size(); i++) {
            while( deleteNode(head, valuesToDelete[i]) );

        }

        return head;
    }

    bool deleteNode(ListNode* &head, int valToDelete) {
        ListNode* current = head;
        ListNode* prev = nullptr;

        while(current!=nullptr){

            if(current->val==valToDelete) {
                if(current==head) {
                    head = current->next;
                }
                else {
                    prev->next = current->next;
                }

                return true;
            }

            prev = current;
            current = current->next;
        }  
        return false;
    }

    void checks() {
         
        ListNode* list1 = LinkedList::createLinkedList({1,2,3,3,4,4,5});
        ListNode* expectedOutput = LinkedList::createLinkedList({1,2,5});
        ListNode* output = deleteDuplicates(list1);

        assert(LinkedList::compareLists(output, expectedOutput));
        cout << "RemoveDuplicatesFromSortedList2: test 1 passed." << endl;


        list1 = LinkedList::createLinkedList({1,1,1,2,3});
        expectedOutput = LinkedList::createLinkedList({2,3});
        output = deleteDuplicates(list1);

        assert(LinkedList::compareLists(output, expectedOutput));
        cout << "RemoveDuplicatesFromSortedList2: test 2 passed." << endl;

    }

};


// PROMPT
// Remove Duplicates from Sorted List II
// Medium
// Topics
// Companies
// Given the head of a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list. Return the linked list sorted as well.

 

// Example 1:


// Input: head = [1,2,3,3,4,4,5]
// Output: [1,2,5]
// Example 2:


// Input: head = [1,1,1,2,3]
// Output: [2,3]
 

// Constraints:

// The number of nodes in the list is in the range [0, 300].
// -100 <= Node.val <= 100
// The list is guaranteed to be sorted in ascending order