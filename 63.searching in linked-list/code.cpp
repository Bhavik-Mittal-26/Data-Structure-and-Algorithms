#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};


void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}
int searching(ListNode* head, int k) { // searching of node in LL
    while (head) {
        if (head->val == k)
            return 1;   // found 
      head = head->next;  // move forward 
    }
    return 0;  // not found 
}


int main() {
    ListNode* head = new ListNode(4);
    head->next = new ListNode(5);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(9);

    cout << "Original List: ";
    printList(head);
    int k =5;
     int result = searching(head, k);
    
    if (result)
        cout << "Element found ";
    else
        cout << "Element not found ";

    return 0;
}