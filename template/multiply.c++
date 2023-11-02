#include<iostream>
using namespace std;
template<class T1, class T2>
void sum(T x , T y)
{
    cout << "Multiplication: " << x * y;
}
int main()
{
    sum(30, 80);
    sum('a', 'b');  
}