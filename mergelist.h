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