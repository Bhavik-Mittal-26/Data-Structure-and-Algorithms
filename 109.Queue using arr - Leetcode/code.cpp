#include <iostream>
using namespace std;

class Queue {
private:
    int arr[100];       // Array to store queue elements
    int front;          // Index of first element
    int rear;           // Index where next element is inserted
    int currSize;       // Current number of elements
    int capacity;       // Maximum size of queue

public:

    // Constructor
    Queue(int size) {
        capacity = size;

        // Queue is initially empty
        front = -1;
        rear = -1;

        currSize = 0;
    }

    // Push: Insert an element into queue
    void push(int x) {

        // Check if queue is full
        if (currSize == capacity) {
            cout << "Queue Overflow" << endl;
            return;
        }

        // If queue is empty
        if (currSize == 0) {

            // First element goes at index 0
            front = 0;
            rear = 0;
        }
        else {

            // Move rear circularly
            rear = (rear + 1) % capacity;
        }

        // Insert element at rear
        arr[rear] = x;

        // Increase number of elements
        currSize++;
    }

    // Pop: Remove the front element
    int pop() {

        // Check if queue is empty
        if (currSize == 0) {
            cout << "Queue Underflow" << endl;
            return -1;
        }

        // Store the front element
        int element = arr[front];

        // If this is the last element
        if (currSize == 1) {

            // Reset queue
            front = -1;
            rear = -1;
        }
        else {

            // Move front circularly
            front = (front + 1) % capacity;
        }

        // Decrease number of elements
        currSize--;

        // Return removed element
        return element;
    }

    // Peek: Return front element without removing it
    int peek() {

        // Check if queue is empty
        if (currSize == 0) {
            cout << "Queue is Empty" << endl;
            return -1;
        }

        return arr[front];
    }

    // Size: Return number of elements
    int size() {
        return currSize;
    }

    // Check whether queue is empty
    bool empty() {
        return currSize == 0;
    }
};


int main() {

    // Create queue of size 5
    Queue q(5);

    // Insert elements
    q.push(10);
    q.push(20);
    q.push(30);

    // Print front element
    cout << "Front element: " << q.peek() << endl;

    // Print size
    cout << "Size: " << q.size() << endl;

    // Remove front element
    cout << "Removed: " << q.pop() << endl;

    // Print new front
    cout << "Front after pop: " << q.peek() << endl;

    return 0;
}