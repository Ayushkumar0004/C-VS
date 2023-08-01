#include<iostream>
using namespace std;
class student
{ public:
int rno;
float cgpa;
void output()
{
    cout << "Roll no is: \n" << rno;
    cout << "Cgpa is: \n" << cgpa;
}
}s1;
int main()
{
    cout << "Roll no: ";
    cin >> s1.rno;
    cout << "Cgpa is: ";
    cin >> s1.cgpa;
    s1.output();
    return 0;
}