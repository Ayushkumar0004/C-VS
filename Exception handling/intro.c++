#include<iostream>
using namespace std;
void divide(int x, int y, int z)
{
    cout << "We are inside the function " << endl;
    if((x-y) != 0)
    {
        int R = z/(x-y);
        cout << "Result: " << R << endl;
    }
    else
    {
        throw(x - y);
    }
}
int main()
{
    try
    {
    cout << "We are inside the block" << endl;
    divide(10, 20, 30);
    divide(5, 5, 8);
    }
    catch(int i)
{
    cout << "Caught the exception.";
}
return 0;
}  