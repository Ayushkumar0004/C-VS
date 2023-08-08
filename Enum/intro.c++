#include<iostream>
using namespace std;
int main()
{
    enum days {s, m, t, w, th, f, st};
    days day1, day2;
    day1 = s;
    day2 = th;
    cout << day1 << endl;
    cout << day2 << endl;

    if (day1 < day2)
    {
        cout << "Day 1 comes before day 2!" << endl;
    }
    else
    {
        cout << "Day 2 comes before day 1!" << endl;
    }
    return 0;
}