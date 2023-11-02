#include<iostream>
using namespace std;
class base()
{
    public:
    base()
    {
        cout << "Constructor base";
        virtual ~base()
        {
            cout << "Destructing base";
        }
    };
    class derived1 : public base
    {
        public:
        derived1()
        {
         cout << "Constructor derived\n";
        ~derived1()
        {
            cout << "Destructing derived\n";
        }
    }
};
int main()
{
    base *b = new derived1;
    delete b;
    return 0;
}