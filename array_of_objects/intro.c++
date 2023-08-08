#include<iostream>
using namespace std;

class student
{
    int rno;
    char grade;

public:
    void ip()
    {
        cout << "\nEnter the rno: ";
        cin >> rno;
        cout << "Enter the grade: ";
        cin >> grade;
    }

    void op()
    {
        cout << "\nRoll no = " << rno;
        cout << "\nGrade = " << grade;
    }
};

int main()
{
    student s[100];
    int i, n;

    cout << "Enter the number of students: ";
    cin >> n;

    for(i = 0; i < n; i++)
    {
        cout << "Enter student info: ";
        s[i].ip();
    }

    for(i = 0; i < n; i++)
    {
        cout << "Display the status of student: ";
        s[i].op();
    }
    return 0;
}
