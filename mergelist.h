#pragma once
#include <iostream>

 //* Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class MergeList {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* curr = list1;
        
        while(curr!= nullptr){
            ListNode* current = list2;
            ListNode* nextval = curr->next;

            while(current != nullptr && curr->val > current->val){
                current = current->next;
            }
            std::cout << "Current: " << current->val;

            ListNode* temp = current->next;
            curr->next = temp;
            current->next = curr;
            curr = nextval;

            
        }
       
        return list2;
    }

    void checks() {
        
        MergeList ml;

        ListNode* list1 = new ListNode(1);
        list1->next = new ListNode(2);
        list1->next->next = new ListNode(4);

        ListNode* list2 = new ListNode(1);
        list2->next = new ListNode(3);
        list2->next->next = new ListNode(4);


        ListNode* lresult = ml.mergeTwoLists(list1, list2);

        ListNode* curr = lresult;
        while(curr ) {
            cout << curr->val << ", ";
            curr = curr->next;
        }

    }

};