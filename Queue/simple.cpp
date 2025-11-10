#include <iostream>
using namespace std;

int queue[5];
int start = -1;
int last = -1;
int MAX = 5;

int getInput(){
    int input;
    cout << "Enter the element -> ";
    cin >> input;
    return input;
}

void enQueue(){
    int value = getInput();
    if(last == MAX - 1){
        cout << " ------ Queue is Full ------ " << endl;
    } else {
        if(start == -1) start++;
        last++;
        queue[last] = value;
    }
}

void deQueue(){
    if(start == -1){
        cout << " ------ Queue is Empty ----- " << endl;
    } else if(start == last){
        start = -1;
        last = -1;
        cout << " ------ Removed Last Element ------ " << endl;
    } else {
        ++start;
    }
}

void peek(){
    if(start == -1)
        cout << " ----- Queue is Empty ----- " << endl;
    else
        cout << "Front element:--------- " << queue[start] << endl;
}


int main() {

    int input;
    while(true){
        cout << "Enter 1 for Enqueue" << endl;
        cout << "Enter 2 for Dequeue" << endl;
        cout << "Enter 3 for Peek" << endl;
        cout << "Enter 4 for Exit" << endl;

        cout << "Enter any option -> ";
        cin >> input;

        switch (input)
        {
        case 1:
            enQueue();
            break;
        case 2:
            deQueue();
            break;
        case 3:
            peek();
            break;
        case 4:
            cout << "Exiting program..." << endl;
                return 0;
        
        default:
            cout << "Exiting program..." << endl;
                return 0; 
        }
    }
}