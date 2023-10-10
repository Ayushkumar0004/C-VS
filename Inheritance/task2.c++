#include<iostream>
using namespace std;
class A
{
public:
    int a, b;
    void ipA()
    {
        cout << "Enter the value of a and b: ";
        cin >> a >> b;
    }
};
class B
{
public:
    int c;
    void ipB()
    {
        cout << "Enter the value of c: ";
        cin >> c;
    }
};
class C : public A, public B
{
    int s;
    public:
    void sum()
    {
        s = a + b + c;
        cout << s;
    }
};
int main()
{
    C o1;
    o1.ipA();
    o1.ipB();
    o1.sum();
    return 0;
}