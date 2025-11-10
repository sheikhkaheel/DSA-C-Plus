#include <iostream>
using namespace std;

struct Node {
    Node* prev = nullptr;
    int data;
    Node* next = nullptr;
};
Node* head = nullptr;

Node* createNode(int data){
    Node* newNode = new Node();
    newNode->data = data;
    return newNode;
}

void insertAtEnd(int data){
    Node* newNode = createNode(data);

    if(head == nullptr){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    newNode->prev = temp;
    temp->next = newNode;

}

void insertAtBeginning(int data){
    Node* newNode = createNode(data);
    if(head == nullptr){
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

void insertAtPosition(int data, int pos){
    if(head == nullptr){
        Node* newNode = createNode(data);
        head = newNode;
        return;
    }

    Node* temp = head;
    for(int i = 0; i < pos - 1; i++){
        if(temp->next == nullptr){
            cout << "Out of Bound" << endl;
            return;
        }
        temp = temp->next;
    }

    Node* newNode = createNode(data);
    temp->prev->next = newNode;
    newNode->next = temp;
    newNode->prev = temp->prev;
    temp->prev = newNode;
}

void printDoubleLindedList(){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "Null" << endl;

}

void deleteAtAnyPosition(int pos){
    if(pos == 1){
        Node* del = head;
        head = del->next;
        delete del;
        return;
    }

    Node* temp = head;
    for( int i = 0; i < pos - 1; i++){
        if(temp->next == nullptr){
            cout << "Out of Bound" << endl;
        }
        temp = temp->next;
    }
    cout << temp->data<< endl;
    if (temp->next != nullptr) temp->next->prev = temp->prev->next;
    if(temp->prev != nullptr )temp->prev->next = temp->next;
    delete temp;

}

int main() {

    insertAtPosition(10, 1);
    insertAtEnd(20);
    insertAtPosition(15, 2);
    deleteAtAnyPosition(1);
    printDoubleLindedList();

    return 0;
}