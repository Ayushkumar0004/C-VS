#include<iostream>
#include<string>
using namespace std;
class student
{
protected:
    int roll_no;
public:
    void get_rno()
    {
        cout << "Enter the roll number:";
        cin >> roll_no;
    }
    void show_rno()
    {
        cout << "\nRoll no: " << roll_no;
    }
};
class result : public student
{
private:
    float fees;
    string section;
    
    void set_fees(float new_fees)
    {
        fees = new_fees;
    }

    void set_section(const string& new_section)
    {
        section = new_section;
    }
public:
    void get_data()
    {
        get_rno();
        cout << "Enter the fees:";
        cin >> fees;
        cout << "Enter the section: ";
        cin >> section;
    }
    void display()
    {
        show_rno();
        cout << "\nFees: " << fees;
        cout << "\nSection: " << section;
    }
};
int main()
{
    result obj1;
    obj1.get_data();
    obj1.display();
    return 0;
}