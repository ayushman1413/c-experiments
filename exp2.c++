#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number : ";
    cin >> number;

// For if-else statement
    if (number > 0) {
        cout << "The number is positive." << endl;
    } 
    else if (number < 0) {
        cout << "The number is negative." << endl;
    } 
    else {
        cout << "The number is zero." << endl;
    }

    // For loop 

    cout << "\nNumbers from 1 to 10 using for loop:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }

    // While loop
    cout << "\n\nNumbers from 10 to 1 using while loop:" << endl;
    int j = 10;
    while (j >= 1) {
        cout << j << " ";
        j--;
    }

    cout << endl;
    return 0;
}
