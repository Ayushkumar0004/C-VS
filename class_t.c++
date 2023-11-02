#include <iostream>
using namespace std;
template <class t1, class t2>
class abc
{
    t1 a;
    t2 b;
public:
    abc(t1 x, t2 y)
    {
        a = x;
        b = y;
    }

    void max1()
    {
        if (a > b)
        {
            cout << "A is greater." << endl;
        }
        else
        {
            cout << "B is greater." << endl;
        }
    }
};
int main()
{
    abc<int, char> o1(20, 'a');
    o1.max1();
    abc<char, char> o2('v', 't');
    o2.max1();
    
    return 0;
}