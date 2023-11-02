#include<iostream>
using namespace std;
template<class t>
void sum(t x , t y)
{
    cout << "Sum: " << x + y <<  endl; 
}
int main()
{
    sum(30, 80);
    sum('a', 'b');
}