// Check if a number is a palindrome using a for loop.

#include <iostream>
using namespace std;
int main()
{
    int number = 123;
    int num1 = number;
    int rv = 0;
    for (; number != 0;)
    {
        rv = rv * 10 + number % 10;
        number = number / 10;
    }
    if (num1 == rv)
    {
        cout << "this palindrome : ";
    }
    else
    {
        cout << "this is not palindrome : ";
    }
}
