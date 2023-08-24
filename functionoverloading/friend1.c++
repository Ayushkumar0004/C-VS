#include<iostream>
using namespace std;
class B;
class A
{
int a;
public: void ip()
{
    cout << "Enter the value of a: ";
    cin >> a;
}
    friend void mean(A ,  B);
}o1;
class B
{
    int b;
    public:
    void ip()
    {
    cout << "Enter the value of b: ";
    cin >> b;
    }
    friend void mean(A ,  B); 
}o2;
void mean(A aa, B bb)
{
    cout << (aa.a + bb.b);
}
int main()
{
    o1.ip();
    o2.ip();
    mean(o1, o2);
}