#include<iostream>
using namespace std;
class Number
{
    int x;
public:
    Number(int n)
    {
        x = n;
    }
    void operator++(int)
    {
        cout << "\nPostfix increment:";
        cout << x++ << endl;
    }
<<<<<<< HEAD
    friend void operator--(Number N, int);
};
void operator--(Number N, int)
=======
    friend void operator--(Number& N, int);
};
void operator--(Number& N, int)
>>>>>>> 5c3369e9c340318a0522bdf9225be68e70da0442
{
    cout << "\nPostfix decrement:";
    cout << N.x-- << endl;
}
int main()
{
    Number N1(10), N2(20);
    N1++;
    N2--;
    return 0;
}