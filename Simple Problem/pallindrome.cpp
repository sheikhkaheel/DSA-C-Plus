#include <iostream>
using namespace std;

class Pallindrome
{

public:
    void getPallindrome(int num)
    {
        int rev = 0, n = num, d;

        while (num != 0)
        {
            d = num % 10;
            num = int(num / 10);
            rev = (rev * 10) + d;
        }

        if (rev == n)
        {
            cout << "It is a Pallindrome";
        }
        else
        {
            cout << "It is not a Pallindrome";
        }
    }
};

int main()
{
    Pallindrome obj;
    obj.getPallindrome(121);

    return 0;
}