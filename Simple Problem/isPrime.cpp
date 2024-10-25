#include <iostream>
using namespace std;

class isPrime
{
public:
    void checkPrime(int num)
    {
        bool flag = true;
        for (int i = 2; i <= num / 2; i++)
        { // No need to check beyond num/2
            if (num % i == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        { 
            cout << "It is a Prime No";
        }
        else
        {
            cout << "It is not a Prime No";
        }
    }
};

int main()
{
    isPrime obj;
    obj.checkPrime(1);
    return 0;
}
