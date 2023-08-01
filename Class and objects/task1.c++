#include<iostream>
using namespace std;
class sum
{public:
    int a,b,s;
    void logic()
    {
        s = a+b;
        cout << "Sum is : " << s;
    }
}sum;
int main()
{
    cout << "value of a is:";
    cin >> sum.a;
    cout << "value of b is :";
    cin >> sum.b;
    sum.logic();
    return 0;
}