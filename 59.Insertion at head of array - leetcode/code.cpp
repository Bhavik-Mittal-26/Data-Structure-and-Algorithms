#include<bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int data;
    ListNode* next;

    ListNode(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
public:
    ListNode* insertAtHead(ListNode* &head, int X) {
        ListNode* newNode = new ListNode(X);  //create new node 
        newNode->next = head;  //new node next points to head
        head = newNode; //now new node is head 
        return head;
    }
};

// function to print list
void printList(ListNode* head) {
    while(head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL";
}

int main(){
    Solution s;

    // manually create list: 1 -> 2 -> 3
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);

    int x = 7;

    s.insertAtHead(head, x);

    printList(head);

    return 0;
}