#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout << "Value of a : ";
    cin >> a;
    cout<< "Value of b : ";
    cin >> b;
    temp = a;
    a = b;
    b = temp;
    cout << a << "\n" << b << "\n" << temp;
    return 0; 
}