#include <iostream>
using namespace std;

class Demo {
private:
    int number;

public:
    Demo() {
        cout << "Constructor called!" << endl;
        number = 10; 
    }

    void display() {
        cout << "Value of number = " << number << endl;
    }

    ~Demo() {
        cout << "Destructor called!" << endl;
    }
};

int main() {
    Demo obj; 
    obj.display(); 

    return 0;
}
