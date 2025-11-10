#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node * head = NULL;

Node* createNode(int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtEnd(int data){
    Node* newNode = createNode(data);
    if(head == NULL){
        head = newNode;
        return;
    } 

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtBeinging(int data){
    Node* newNode = createNode(data);
    newNode->next = head;
    head = newNode;
}

void insertAtAnyPosition(int position){
    int value;
    cout << "Enter the Data: ";
    cin >> value;
    Node* newNode = createNode(value);
    if(position == 1){
        newNode->next = head;
        head = newNode;
        return;
    }
    Node* temp = head;
    for(int i = 1; i < position - 1; i++){
        if(temp->next == NULL){
        cout << endl << "Out of bounds" << endl;
        return;
    }
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteAtBegining(){}

void deleteAtEnd(){}

void deleteAtAnyPosition(int position){}

void printListedList(){
    Node* temp = head;
    cout << endl;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    };
    cout << "NULL" << endl;
    cout << endl;
}

int main(){

    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    insertAtBeinging(50);
    printListedList();
    insertAtAnyPosition(1);
    printListedList();

    return 0;
}