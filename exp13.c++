#include <iostream>
using namespace std;

// Template function to find the largest of two numbers
template <typename T>
T findLargest(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    //int
    int int1 = 10, int2 = 25;
    cout << "Largest (int): " << findLargest(int1, int2) << endl;

    // float
    float float1 = 3.5f, float2 = 2.8f;
    cout << "Largest (float): " << findLargest(float1, float2) << endl;

    // double
    double double1 = 5.123, double2 = 9.456;
    cout << "Largest (double): " << findLargest(double1, double2) << endl;

    //  char
    char char1 = 'A', char2 = 'Z';
    cout << "Largest (char): " << findLargest(char1, char2) << endl;

    return 0;
}
