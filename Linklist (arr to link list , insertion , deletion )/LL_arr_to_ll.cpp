#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*next;

      node(int d) {
        data = d;
        next = nullptr;
      }
    };
node*convert_LL(vector<int>nums){
    node *head=new node(nums[0]);
    int n=nums.size();
    node*temp=head;    //we have taken the temp so that our data cant be missed 
    for(int i=1;i<n;i++){  //we have started the loop from 1 becoz we alrey have head with nums[0]
        node* new_node =new node(nums[i]);
        temp->next=new_node; //arrow is used becoz -: Go to the node that temp is pointing to ,  Access its next pointer , Make it point to new_node
        temp=temp->next;}
        return head;
    }


// function to print linked list
void print_LL(node* head) {
    node* temp = head;
    while(temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
}
    int main(){
        vector<int>nums={1,2,3,4,5};
          node* head = convert_LL(nums);

    cout << "Linked List: ";
    print_LL(head);

    return 0;
}

