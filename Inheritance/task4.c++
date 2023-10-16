#include<iostream>
using namespace std;
class A
{
public:
    int a, b;
    void ip1()
    {
        cout << "Enter the value a and b: ";
        cin >> a >> b;
    }
};
class B : public A
{
public:
int c;
void ip2()
{
    cout << "Enter the value of c: " << endl;
    cin >> c;
}
};
class C : public B
{
    public:
    void max()
    {
        if(a > b && a > c)
        {
            cout << "a is greater." << endl;
        }
        else if(b > a && b > c)
        {
            cout << "b is greater." << endl;
        }
        else
        {
            cout << "c is greater." << endl;
        }
    }
};
int main()
{
    C c1;
    c1.ip1();
    c1.ip2();
    c1.max();
    return 0;
}