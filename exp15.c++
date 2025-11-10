#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename = "sample.txt";
    string text;

    // exception handling for ofstream
    ofstream outFile;
    outFile.exceptions(ofstream::failbit | ofstream::badbit);

    try {
        outFile.open(filename);
        outFile << "This is a file created with exception handling.\n";
        outFile << "C++ file I/O error handling demo.\n";
        outFile.close();
        cout << "File written successfully.\n";
    }
    catch (const ios_base::failure& e) {
        cerr << "Error while writing to file: " << e.what() << endl;
        return 1;
    }

    // exception handling for ifstream
    ifstream inFile;
    inFile.exceptions(ifstream::badbit);

    try {
        inFile.open(filename);
        cout << "\nReading data from file:\n";
        while (getline(inFile, text)) {
            cout << text << endl;
        }
        inFile.close();
    }
    catch (const ios_base::failure& e) {
        cerr << "Error while reading from file: " << e.what() << endl;
        return 1;
    }

    return 0;
}
