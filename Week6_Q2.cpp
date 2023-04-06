#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* Next;
    Node(int data1){
        data =data1;
        Next = NULL;
    }
};

class LinkedList{
public:
    Node* head;
    LinkedList() {
        head = NULL;
    }
    void append(int data){
        if(head==NULL){
            head = new Node(data);
            return;
        }
        Node* current = head;
        while(current->Next != NULL){
            current = current->Next;
        }
        current->Next = new Node(data);
    }
    void prepend(int data){
        Node* newHead = new Node(data);
        newHead->Next = head;
        head = newHead;
    }
    void deleteValue(int data){
        if(head==NULL){
            return;
        }
        if(head->data==data){
            head=head->Next;
            return;
        }
        Node* current = head;
        while(current->Next != NULL){
            if(current->Next->data==data){
                current->Next=current->Next->Next;
                return;
            }
            current=current->Next;
        }
    }
    void printval(){
        Node* current = head;
        while(current != NULL){
            cout<<current->data<<endl;
            current=current->Next;
        }
        cout<<"######\n";
    }
    void search(int data){
        Node* current = head;
        while(current != NULL){
            if(current->data==data){
                cout<<"Found\n";
                return;
            }
            current=current->Next;
        }
        cout<<"NIL\n";
    }
};

class Stack {
    LinkedList* stack;
public:
    Stack() {
        stack = new LinkedList();
    }
    void push(int element) {
        stack->append(element);
    }
    int pop() {
        if (stack->head==NULL) {
            cout << "Stack underflow" << endl;
            return -1;
        }
        int temp = stack->head->data;
        stack->head = stack->head->Next;
        return temp;
    }
    int peek() {
        if (stack->head==NULL) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return stack->head->data;
    }
    bool isEmpty() {
        return stack->head==NULL;
    }
};
int main(){
    Stack s;
    s.push(6);
    s.push(16);
    s.push(26);
    s.push(36);
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.peek() << endl;
    cout << s.isEmpty() << endl; //
    return 0;
}
