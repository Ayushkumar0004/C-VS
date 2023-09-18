#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n;
    ifstream obj;
    obj.open("input.txt",ios::out);
    if (!obj)
    {
        cout << "File not open for reading\n";
        return 1;
    }
    obj >> n;
    obj.close();
    ofstream obj1;
    obj1.open("table.txt");
    if (!obj1)
    {
        cout << "File not open for writing\n";
        return 1;
    }
    for (int i = 0; i <= 10; i++)
    {
        obj1 << n << " * " << i << " = " << n * i << "\n";
    }
    obj1.close();
    cout << "Table written successfully.\n";
    return 0;
}