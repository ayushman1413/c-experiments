#include <iostream>
using namespace std;

// Base class 
class Shape {
public:
    // Virtual function to display area
    virtual void displayArea() {
        cout << "Generic shape" << endl;
    }
};

// Derived class for Rectangle
class Rectangle : public Shape {
    float l, w;  
public:
    // Constructor to initialize length and width.
    Rectangle(float x, float y) { l = x; w = y; }
    void displayArea() {
        cout << "Area of Rectangle = " << l * w << endl;
    }
};

// Derived class for Circle
class Circle : public Shape {
    float r;
public:
    // Constructor 
    Circle(float x) { r = x; }
    void displayArea() {
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
};

// Main function
int main() {
    Shape* s;  
    Rectangle rect(5, 3);  
    Circle cir(4); 
    s = &rect;  
    s->displayArea();  
    s = &cir;  
    s->displayArea();  
    return 0;
}
