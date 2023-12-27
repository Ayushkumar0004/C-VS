#include<iostream>
using namespace std;
int main()
{
    int a[5], i;
    cout << "Enter array elements: " << endl;
    for(i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    int* p = a;
    cout << "Value of a is: " << *p << endl;
    p++; 
    cout << "Value of a is: "  << *p << endl; 
    cout << "Address of updated element: " << p << endl;
    p = p + 2;
    cout << *p << endl;
    p = p - 1; 
    cout << "Value of updated element: " << *p << endl;
    return 0;
}