#include <bits/stdc++.h>
using namespace std;
class ListNode {
public:
    int data;
    ListNode* next;
    ListNode* prev;

    ListNode(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};
ListNode* insertAtEnd(ListNode* head, int val) {
    ListNode* newNode = new ListNode(val);

    if (head == nullptr) return newNode;

    ListNode* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;

    return head;
}

void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}
class Solution {
public:
    ListNode *deleteHead(ListNode *&head) {
        if (head == nullptr) return nullptr;

        ListNode* temp = head;
        head = head->next;

        if (head != nullptr) {
            head->prev = nullptr;
        }

        delete temp;
        return head;
    }
};
int main() {
    ListNode* head = nullptr;
    head = insertAtEnd(head, 1);
    head = insertAtEnd(head, 2);
    head = insertAtEnd(head, 3);
    head = insertAtEnd(head, 4);

    cout << "Original List:\n";
    printList(head);

    Solution obj;
    head = obj.deleteHead(head);

    cout << "After deleting head:\n";
    printList(head);

    return 0;
}