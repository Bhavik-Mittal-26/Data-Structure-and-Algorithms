//creating a single node of a linked list and printing its value.
#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* next;

    node(int d){
        data = d;
        next = nullptr;
    }

    node(int d, node* a) : data(d), next(a) {}
};

int main() {
    node* head = new node(1); 
    cout << head->data << endl;

    return 0;
}