#include <iostream>
using namespace std;
int main() {
    int a[5], i, key;
    cout << "Enter array elements: " << endl;
    for (i = 0; i < 5; i++) {
        cin >> a[i];
    }
    cout << "Enter the element to search: " << endl;
    cin >> key;
    int *p = a;
    bool found = false;
    for (i = 0; i < 5; i++) {
        if (*p == key) {
            found = true;
            break;
        }
        p++;
    }
    if (found) {
        cout << "Element " << key << " found at index " << i << endl;
    } else {
        cout << "Element " << key << " not found in the array." << endl;
    }
    return 0;
}