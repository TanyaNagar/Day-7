#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    cout << a << endl;

    if (true)
    {
        int b = 5;
        cout << b << endl;
    }
    int b = 1;
    cout << b << endl;

    // int b = 3; --> will through an error a b is already declared in this block

    for (int i = 1; i < 8; i++)
    {
        cout << "Hi" << endl;
    }
}