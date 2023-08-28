#include<iostream>
using namespace std;
int main()
{
    int a,b,temp, *p;
    p = &temp;
    cout << "Value of a : ";
    cin >> a;
    cout<< "Value of b : ";
    cin >> b;
    *p = a;
    a = b;
    b = *p;
    cout << a << "\n" << b << "\n" << *p;
    return 0; 
}