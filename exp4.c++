#include <iostream>
using namespace std;

// Base class
class Shape {
protected:
    float length;
    float width;

public:
    void setDimensions(float l, float w) {
        length = l;
        width = w;
    }
};

// Derived class
class Rectangle : public Shape {
public:
    float calculateArea() {
        return length * width;
    }

    void displayArea() {
        cout << "Area of the rectangle = " << calculateArea() << endl;
    }
};

int main() {
    Rectangle rect;
    float l, w;

    cout << "Enter the length of the rectangle: ";
    cin >> l;
    cout << "Enter the width of the rectangle: ";
    cin >> w;

    rect.setDimensions(l, w);
    rect.displayArea();

    return 0;
}
