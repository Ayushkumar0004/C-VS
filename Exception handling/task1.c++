#include<iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter the no: " << endl;
    cin >> x;
    try
    {
        if(x == -1)
        {
            throw 'a';
        }
        else if(x == 0)
        {
            throw 2;
        }
        else if(x == 1)
        {
            throw 2.3;
        }
        else{
            cout << x;
        }
    }
    catch(int x)
    {
        cout << "The value is integer.";
    }
        catch(char x)
    {
        cout << "The value is character.";
    }
        catch(float x)
    {
        cout << "The value is float.";
    }
}