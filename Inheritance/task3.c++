#include<iostream>
using namespace std;
class A
{
public:
    int x, y;
    
    void ipA()
    {
        cout << "Enter the value x and y: ";
        cin >> x >> y;
    }
};
class B
{
public:
int z;
void ipB()
{
    cout << "Enter the value of z: " << endl;
    cin >> z;
}
};
class C : public A, public B
{
    public:
    int sum;
    void Sum()
    {
        ipA();
        ipB();
        sum = x + y + z;
        cout << "Sum: " << sum;
    }
};
int main()
{
    C o1;
    o1.Sum();
    return 0;
}