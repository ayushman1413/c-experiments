#include <iostream>
using namespace std;

class Shape {
public:
    virtual void displayArea() {
        cout << "Generic shape" << endl;
    }
};

class Rectangle : public Shape {
    float l, w;
public:
    Rectangle(float x, float y) { l = x; w = y; }
    void displayArea() {
        cout << "Area of Rectangle = " << l * w << endl;
    }
};

class Circle : public Shape {
    float r;
public:
    Circle(float x) { r = x; }
    void displayArea() {
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
};

int main() {
    Shape* s;
    Rectangle rect(5, 3);
    Circle cir(4);
    s = &rect; s->displayArea();
    s = &cir; s->displayArea();
    return 0;
}
