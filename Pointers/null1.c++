#include<iostream>
using namespace std;
int main()
{
    int *p = NULL;
    int a = 10;
    cout << p << endl;
    p = &a;
    cout << *p << endl;
    return 0;
}