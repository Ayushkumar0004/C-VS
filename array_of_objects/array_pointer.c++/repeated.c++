// wap to find the repeated elements in the array and count it.
#include <iostream>
using namespace std;
int main() {
    int arr[7], i;
    cout << "Enter the array elements: ";
    for(i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Repeated elements in the array and their counts:" << endl;
    for (int i = 0; i < n; ++i) {
        int count = 0;
        bool isDuplicate = false;
        for (int j = 0; j < i; ++j) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (isDuplicate) {
            continue;
        }
        for (int j = 0; j < n; ++j) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > 1) {
            cout << "Element " << arr[i] << " appears " << count << " times." << endl;
        }
    }
    return 0;
}