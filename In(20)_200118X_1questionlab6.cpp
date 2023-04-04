#include <iostream>
using namespace std;

#define MAX_SIZE 100

class Stack {
    private:
        int arr[MAX_SIZE];
        int top;
    public:
        Stack() {
            top = -1;
        }
        bool isEmpty() {
            return (top == -1);
        }
        bool isFull() {
            return (top == MAX_SIZE - 1);
        }
        void push(int value) {
            if (isFull()) {
                cout << "Stack Overflow" << endl;
            } else {
                arr[++top] = value;
            }
        }
        int pop() {
            if (isEmpty()) {
                cout << "Stack Underflow" << endl;
                return -1;
            } else {
                return arr[top--];
            }
        }
        int stackTop() {
            if (isEmpty()) {
                cout << "Stack is empty" << endl;
                return -1;
            } else {
                return arr[top];
            }
        }
        void display() {
            if (isEmpty()) {
                cout << "Stack is empty" << endl;
            } else {
                cout << "Stack elements are: ";
                for (int i = 0; i <= top; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
        }
};

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.display();
    cout << "Stack_top_is: " << s.stackTop() << endl;
    s.pop();
    cout << "Stack_top_after pop is: " << s.stackTop() << endl;
    s.display();
    cout << "Is the stack_empty? " << (s.isEmpty() ? "Yes" : "No") << endl;
    cout << "Is the stack_full? " << (s.isFull() ? "Yes" : "No") << endl;
    return 0;
}