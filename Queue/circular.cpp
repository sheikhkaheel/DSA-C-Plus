#include <iostream>
using namespace std;

int queue[5];
int front = -1;
int back = -1;
int const MAX = 5;

int getInput(){
    int value;
    cout << "Enter your Number -> ";
    cin >> value;
    return value;
}

void enQueue(){
    int input = getInput();
    if((back+1)%MAX == front){
        cout << "Queue is full." << endl;
        return;
    }
     else if(front == -1 && back == -1){
        front = 0;
        back = 0;
    }
     else {
        back = (back + 1) % MAX;
    }
    queue[back] = input;
}

void deQueue(){
    if(front == -1 && back == -1){
        cout << "Queue is empty.\n";
    } else if(front == back){
        front = back = -1;
    } else {
        front = (front+1) % MAX;

    }
}

void printQueue(){
    if(front == -1 && back == -1){
        cout << "Queue is empty" << endl;
        return;
    }
    int i = front;

    while(true){
        cout << queue[i] << " ";
        if(i == back) break;
        i = (i+1)%MAX;
    }
}

void peek(){
     if (front == -1)
        cout << "Queue is empty\n";
    else
        cout << queue[front] << endl;
}

int main() {

    enQueue(); peek();
    enQueue(); peek();
    enQueue(); peek();
    enQueue(); peek();
    enQueue(); peek();
    enQueue(); peek();

    deQueue(); peek();
    deQueue(); peek();
    deQueue(); peek();
    deQueue(); peek();
    deQueue(); peek();

    return 0;
}