#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;

public:
    // input student details
    void inputDetails() {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNumber;
    }

    // display student details
    void displayDetails() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main() {
    Student s;

    s.inputDetails();
    s.displayDetails();

    return 0;
}
