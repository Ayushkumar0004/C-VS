#include<iostream>
using namespace std;
int main()
{
    enum month{JAN,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC};
    month mth1,mth2;
    mth1 = FEB;
    mth2 = NOV;
    cout << mth1 << "\n";
    cout << mth2 << "\n";
    if(mth1 < mth2)
    {
        cout <<"MTH 1 is comes before mth2!";
    }
    else
    {
        cout << "MTH 2 is come before mth 1!";
    }
    return 0;
}