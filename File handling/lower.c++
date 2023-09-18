#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream srcFile("source.txt");
    if (!srcFile) {
        cout << "Error opening source file.\n";
        return 1;
    }
    srcFile.close();
    ofstream destinationFile("destination1.txt");
    if (!destinationFile) {
        cout << "Error opening destination file.\n";
        return 1;
    }
    char ch;
    while(srcFile.get(ch)) 
    {
        if (islower(ch)) {
            destinationFile.put(ch);
        }
    }
    destinationFile.close();
    cout << "Lowercase letters transferred successfully.\n";
    return 0;
}