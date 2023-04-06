#include <iostream>
using namespace std;

const int size1 = 100;

class Stack {
public:
    int arr[size1];
    int top;
    Stack() {
        top = -1;
    }


    void push(int item) {
        if (top == size1 - 1) {
            cout << "Stack overflow\n";
            return;
        }
        top++;
        arr[top] =item;
    }
    int pop() {
        if (top == -1) {
            cout << "Stack underflow\n";
            return NULL;
        }
        int temp = arr[top];
        top--;
        return temp;
    }
    int peek() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[top];
    }
    bool isEmpty() {
        return top == -1;
    }




};
int main(){
    Stack s ;
    s.push(5);
    return 0;
}
