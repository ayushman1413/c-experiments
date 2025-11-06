#include <iostream>
using namespace std;

int main() {
    int numerator, denominator;
    double result;

    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;

    try {
        // Check for division by zero
        if (denominator == 0)
            throw "Error! Division by zero is not allowed.";

        result = static_cast<double>(numerator) / denominator;
        cout << "Result = " << result << endl;
    }
    catch (const char* message) {
        cout << "Exception caught: " << message << endl;
    }

    cout << "Program continues after exception handling." << endl;

    return 0;
}
