#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1(10);
    cout << "Size is\t" << v1.size() << "\n";
    for (int i = 0; i < 10; i++) {
        cin >> v1[i];
    }
    for (int i = 0; i < 20; i++) {
        v1.push_back(i);
    }
    cout << "Size is\t" << v1.size() << "\n";
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << "\t";
    }
    // Remove the last two elements
    v1.pop_back();
    v1.pop_back();
    cout << "\nNew size of the vector: " << v1.size() << "\n";
    // Update the vector using an input loop
    for (int i = 0; i < v1.size(); i++) {
        cin >> v1[i];
    }
    // Print the updated vector
    cout << "Updated vector elements:\n";
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << "\t";
    }
    return 0;
}
