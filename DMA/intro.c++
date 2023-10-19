#include<iostream>
using namespace std;
class A
{
    int *p;
    public:
    A()
    {
        cout << "Constructor calling" << endl;
        p = new int;
        cin >> *p;
        cout << *p;
    }
    ~A()
    {
        cout << "Destructor calling" << endl;
    }
};
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    A *o1 = new A[n];
    return 0;
}