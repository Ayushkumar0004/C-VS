#include <iostream>
#include <cstring>
using namespace std;
void reverseName(char* start, char* end) {
    if (start >= end) {
        return;
    }
    char temp = *start;
    *start = *end;
    *end = temp;
    reverseName(start + 1, end - 1);
}
int main() {
    char name[100];
    cout << "Enter a name: ";
    cin.getline(name, 100);
    int length = strlen(name);
    reverseName(name, name + length - 1);
    cout << "Reversed name: " << name << endl;
    return 0;
}