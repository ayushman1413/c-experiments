#include <iostream>
using namespace std;

class B; 

class A {
private:
    int numA;
public:
    A(int a) {
        numA = a;
    }

    // friend function
    friend int add(A, B);
};

class B {
private:
    int numB;
public:
    B(int b) {
        numB = b;
    }

    // friend function
    friend int add(A, B);
};

int add(A objA, B objB) {
    return objA.numA + objB.numB;
}

int main() {
    A a(10);
    B b(20);

    cout << "Sum = " << add(a, b) << endl;

    return 0;
}
