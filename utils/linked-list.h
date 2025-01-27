#pragma once
#include <vector>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class LinkedList {
public:
    static ListNode* createLinkedList(const vector<int> &input) {
        ListNode* head = nullptr;
        ListNode* prev = nullptr;

        for(int i = 0; i < input.size(); i++) {
            ListNode* newNode = new ListNode(input[i]);
            if(!head) {
                head = newNode;
            }
            if(prev) {
                prev->next = newNode;
            }
            prev = newNode;
        }
        return head;
    }

    static bool compareLists(ListNode* list1, ListNode* list2) {
        ListNode* curr1 = list1;
        ListNode* curr2 = list2;

        while(curr1 || curr2) {

            if(!curr1 && curr2) {
                return false;
            }

            if(curr1 && !curr2) {
                return false;
            }

            if(curr1->val != curr2->val) {
                return false;
            }

            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        return true;
    }



};




////////

void testCreateLinkedList() {
    vector<int> input = {1, 2, 3, 4, 5};
    ListNode* head = LinkedList::createLinkedList(input);

    ListNode* current = head;
    for (int val : input) {
        if (current == nullptr || current->val != val) {
            cout << "testCreateLinkedList failed!" << endl;
            return;
        }
        current = current->next;
    }
    cout << "testCreateLinkedList passed!" << endl;
}

void testCompareLists() {
    vector<int> input1 = {1, 2, 3, 4, 5};
    vector<int> input2 = {1, 2, 3, 4, 5};
    vector<int> input3 = {1, 2, 3, 4, 6};

    ListNode* list1 = LinkedList::createLinkedList(input1);
    ListNode* list2 = LinkedList::createLinkedList(input2);
    ListNode* list3 = LinkedList::createLinkedList(input3);

    if (LinkedList::compareLists(list1, list2) && !LinkedList::compareLists(list1, list3)) {
        cout << "testCompareLists passed!" << endl;
    } else {
        cout << "testCompareLists failed!" << endl;
    }
}
