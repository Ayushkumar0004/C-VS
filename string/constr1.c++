#include <iostream>
using namespace std;
class Rect
{
private:
    int length, breadth;

public:
    Rect(int a, int b)
    {
        length = a;
        breadth = b;
    }

    void displayoutput()
    {
        int a = length * breadth;
        cout << "The area of rectangle is: " << a << endl;
    }
};
int main()
{
    Rect r1(5, 6);
    r1.displayoutput();
    return 0;
}