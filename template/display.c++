#include<iostream>
using namespace std;

template <class T>
void display(T x)
{
    cout << "Template display: " << x << endl;
}
template <class T1, class T2, class T3>
void display(T1 x, T2 y, T3 z)
{
    cout << "Template display: " << x << " " <<  y << " " << z << endl;
}
template <class T>
void display(T x, int y)
{
    cout << "Template display: " << x << " " << y << endl;
}
void display(int x)
{
    cout << "Explicit display: " << x << endl;
}

void display(char y)
{
    cout << "Explicit display: " << y << endl;
}
int main()
{
    display(10, 20, 30);
    display(10);
    display('b');
    display(5, 42); // Call the template version with two parameters
}