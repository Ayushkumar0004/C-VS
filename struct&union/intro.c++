#include<iostream>
using namespace std;
struct SwapData
{
    int a, b;
};
int main()
{
    SwapData s1;
    cout << "Enter the value of a: ";
    cin >> s1.a;
    cout << "Enter the value of b: ";
    cin >> s1.b;
    int c = s1.a;
    s1.a = s1.b;
    s1.b = c;
    cout << "After swap, a: " << s1.a << ", b: " << s1.b << endl;
    return 0;
}