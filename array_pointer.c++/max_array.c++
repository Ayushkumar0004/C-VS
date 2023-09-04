#include <iostream>
using namespace std;
int main() {
    int a[5], i;
    cout << "Enter array elements: " << endl;
    for (i = 0; i < 5; i++) {
        cin >> a[i];
    }
    int max = a[0];
    for (i = 0; i < 5; i++) 
    {
        if (a[i] > max) {
            max = a[i];
        }
    }
    cout << "Maximum element in the array: " << max << endl;
    return 0;
}