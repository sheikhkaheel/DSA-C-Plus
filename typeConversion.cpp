#include <iostream>
using namespace std;

int main() {
    cout << "Type Conversion\n\n";

    // Implicit conversion
    cout << "Enter an integer number: ";
    int num1;
    cin >> num1;
    float num2 = num1;
    cout << "This is implicit conversion: " << num2 << endl;

    // Explicit conversion
    cout << "Enter a float number: ";
    float n1;
    cin >> n1;
    int n2 = n1;
    cout << "This is explicit conversion: " << n2 << endl;

    return 0;
}
