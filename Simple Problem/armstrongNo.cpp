#include <iostream>
#include <cmath>
using namespace std;

class ArmstrongChecker {
public:
    bool isArmstrong(int num) {
        int sum = 0, temp, remainder, n = 0;
        temp = num;
        while (temp != 0) {
            temp /= 10;
            n++;
        }

        temp = num;
        while (temp != 0) {
            remainder = temp % 10;
            sum += pow(remainder, n);
            temp /= 10;
        }

        return sum == num;
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    ArmstrongChecker checker;
    if (checker.isArmstrong(num))
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}
