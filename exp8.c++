#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }

    float add(float a, float b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    cout << "Add two integers (5 + 10): " << calc.add(5, 10) << endl;
    cout << "Add three integers (2 + 4 + 6): " << calc.add(2, 4, 6) << endl;
    cout << "Add two floats (3.5 + 2.8): " << calc.add(3.5f, 2.8f) << endl;

    return 0;
}
