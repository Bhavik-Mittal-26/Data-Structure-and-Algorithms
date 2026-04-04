#include <bits/stdc++.h>
using namespace std;
class ListNode {
public:
    int data;
    ListNode *prev;
    ListNode *next;
    ListNode() : data(0), prev(nullptr), next(nullptr) {}
    ListNode(int x) : data(x), prev(nullptr), next(nullptr) {}
    ListNode(int x, ListNode *prev, ListNode *next) : data(x), prev(prev), next(next) {}
};

class Solution {
public:
    ListNode* insertBeforeHead(ListNode* head, int X) {
        ListNode* newHead = new ListNode(X);
        if (head != nullptr) {
            newHead->next = head;
            head->prev = newHead;
        }
        return newHead;
    }
};

void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->prev = head;
    head->next->next = new ListNode(3);
    head->next->next->prev = head->next;

    Solution obj;
    head = obj.insertBeforeHead(head, 0);

    printList(head);

    return 0;
}
