#include <iostream>
using namespace std;
class Counter
{
    private:
    int C;
    public:
    Counter();
    Counter(int a)
    {
        C = a;
    }
    Counter (Counter &ob)
    {
        C = ob.C;
    }
void show()
{
    cout << C;

}
};
int main()
{
    Counter c1(10);
    Counter c2(c1);
    c1.show();
    cout << endl;
    c2.show();
}