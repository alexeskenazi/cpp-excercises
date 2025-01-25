#pragma once
#include <iostream>
#include <cassert>
using namespace std;


class RemoveDuplicatesFromSortedList {
    struct ListNode {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };

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
        
        // Build the input list with duplicates
        ListNode* list1 = new ListNode(1);
        list1->next = new ListNode(1);
        list1->next->next = new ListNode(2);
        list1->next->next->next = new ListNode(3);
        list1->next->next->next->next = new ListNode(3);

        ListNode* lresult = deleteDuplicates(list1);

        ListNode* curr = lresult;
        string outputAsString  = "";
        while(curr ) {
            outputAsString.push_back(curr->val + '0');
            curr = curr->next;
        }
        assert(outputAsString=="123");
        cout << "RemoveDuplicatesFromSortedList: test 1 passed." << endl;

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