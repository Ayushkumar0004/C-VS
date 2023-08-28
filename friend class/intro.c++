#include <iostream>
using namespace std;
int main()
{
    int b, &a = b;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << a << endl;
    cout << a + b << endl;
    a = 100;
    cout << a + b << endl;
    b = 2;
    cout << a << endl << b;
    return 0;
}