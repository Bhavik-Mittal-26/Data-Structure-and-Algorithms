#include <iostream>
using namespace std;

class Stack {
private:
    int arr[100];       // Array to store stack elements
    int top;            // Stores index of top element
    int capacity;       // Maximum size of stack

public:

    // Constructor
    Stack(int size) {
        capacity = size;
        top = -1;       // -1 means stack is empty
    }

    // Push: Insert an element into stack
    void push(int x) {

        // Check if stack is full
        if (top == capacity - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }

        // Move top to next position
        top++;

        // Insert element
        arr[top] = x;
    }

    // Pop: Remove the top element
    void pop() {

        // Check if stack is empty
        if (top == -1) {
            cout << "Stack Underflow" << endl;
            return;
        }

        // Remove element by moving top backwards
        top--;
    }

    // Top: Return the top element
    int peek() {

        // Check if stack is empty
        if (top == -1) {
            cout << "Stack is Empty" << endl;
            return -1;
        }

        return arr[top];
    }

    // Size: Return number of elements
    int size() {
        return top + 1;
    }

    // Check whether stack is empty
    bool empty() {
        return top == -1;
    }
};


int main() {

    // Create stack of size 5
    Stack st(5);

    // Insert elements
    st.push(10);
    st.push(20);
    st.push(30);

    // Print top element
    cout << "Top element: " << st.peek() << endl;

    // Print size
    cout << "Size: " << st.size() << endl;

    // Remove top element
    st.pop();

    // Print top after pop
    cout << "Top after pop: " << st.peek() << endl;

    return 0;
}