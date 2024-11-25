// Count the number of vowels in a given string using a for loop.
#include <iostream>
using namespace std;
int main()
{
    string name;
    cout << "Enter Sttring :";
    cin >> name;
    int i = 0;
    int count = 0;
    for (i; i <= name.length(); ++i)
    {
        char com = name[i];
        if (com == 'a' || com == 'e' || com == 'i' || com == 'o' || com == 'u' ||
            com == 'A' || com == 'E' || com == 'I' || com == 'O' || com == 'U')
        {
            ++count;
            cout << name[i] << endl;
        }
    }
    cout <<"Total " << count<<" Vovels In Thise String :";
}