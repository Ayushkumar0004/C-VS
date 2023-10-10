#include<iostream>
using namespace std;
class A
{
public:
    int a, b, s;
    
    void ip()
    {
        cout << "Enter the value: ";
        cin >> a >> b;
    }
protected:
    void sum()
    {
        s = a + b;
        cout << "Sum: " << s << endl;
    }
};
class B : private A
{
public:
    float av;
    void Average()
    {
        ip();
        sum();
        av = s / 3.0;
        cout << "Average: " << av << endl;
    }
};
int main()
{
    B o1;
    o1.Average();
    return 0;
}