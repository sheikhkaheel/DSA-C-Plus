#include <iostream>
using namespace std;

class fibonanciSeries
{
public:
    void generate(int limit)
    {
        int num1 = 0, num2 = 1;
        cout << num1 << " " << num2;
        int sum = num1 + num2;

        while (sum <= limit)
        {
            num1 = num2, num2 = sum;
            cout << " " << sum;
            sum = num1 + num2;
        }
    }
};

int main()
{
    fibonanciSeries obj;
    obj.generate(13);
}