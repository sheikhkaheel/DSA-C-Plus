#include <iostream>
using namespace std;

int stack[5];
int const MAX = 5;
int front = -1;

void push(int val){
    if(front == MAX - 1){
        cout << "Stack is Full" << endl;
        return;
    }
    stack[++front] = val;
}

void pop(){
    if(front == -1){
       cout << "Stack is Empty" << endl;
       return;
    }
    front--;
}

void peek(){
    if (front == -1) cout << "Stack is Empty" << endl;
    else cout << "Element is -> " << stack[front] << endl;
}


int main() {

    push(10);   
    peek();
    pop();    
    push(20);   
    pop();    
    push(30);    
    pop();    
    peek();
    push(40);    
    pop();    
    push(50);    
    pop();    
    push(60);
    peek();
    pop();    
    peek();

    return 0;
}