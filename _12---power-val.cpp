#include <iostream>
using namespace std;
int main()
{
    int number;
    int power = 1;
    cout << "Enter Number :";
    cin >> number;

    for (int i = 1; i <= 3; ++i)
    {
        power = power * number;
    }
    cout << "Power of "<<number <<" is : " << power;
}



