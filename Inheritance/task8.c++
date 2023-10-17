#include<iostream>
using namespace std;
class A
{
    int x;
    public:
    A()
    {
        cout << "\nCalling base class default ";
    }
    A(int a)
    {
        x = a;
        cout << "\nCalling base class paarametrized" << x;
    }
    ~A()
    {
        cout << "\nCalling base class destructor";
    }
};
class B : public A{
    int l;
    public:
    B()
    {
        cout << "Calling derived class default";
    }
    B(int p) : A(p)
    {
        l = p;
        cout << "\nCalling derived class parametrized" << l; 
    }
    ~B()
    {
        cout << "\nCalling derived class destructor";
    }
};
int main()
{
    B obj2(1);
    return 0;
}