#include<iostream>
using namespace std;
int main()
{
    int *p;
    {
    int a = 10;
    p = &a;
    cout << "The address of a is  : " << p << endl;
    cout << "The value of a is : " << *p << endl;
    }
    cout << "The address of a is  : " << p << endl;
    cout << "The value of a is : " << *p << endl;
    p = NULL;
    cout << "The address of a is  : " << p << endl;
    cout << "The value of a is : " << *p << endl;
}