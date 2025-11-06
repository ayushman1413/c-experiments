#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename = "example.txt";
    string text;

    // Writing to file
    ofstream outFile(filename);
    if (!outFile) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }
    outFile << "This is a C++ file I/O example.\n";
    outFile << "File handling includes reading and writing operations.\n";
    outFile.close();
    cout << "Data written to file successfully.\n";

    // Reading file
    ifstream inFile(filename);
    if (!inFile) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    cout << "\nReading data from file:\n";
    while (getline(inFile, text)) {
        cout << text << endl;
    }
    inFile.close();

    return 0;
}
