#include<iostream>
using namespace std;
class Rect
{
    private:
    int length, breadth;
    public:
    Rect()
    {
        length = 10; breadth = 9;
    }
    void displayoutput()
    {
        int a = length * breadth;
        cout << "The area of rectangle is: " << a;
    }
};
int main()
{
    Rect r1;
    r1.displayoutput();
    return 0;
}