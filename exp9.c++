// This program demonstrates polymorphism in C++.
// It defines a base class Shape with a virtual function displayArea(),
// and derived classes Rectangle and Circle that override it to calculate and display their areas.
// Polymorphism allows treating different shapes uniformly through a base class pointer.

#include <iostream>
using namespace std;

// Base class representing a generic shape.
// Uses virtual function for polymorphism.
class Shape {
public:
    // Virtual function to display area; overridden in derived classes.
    virtual void displayArea() {
        cout << "Generic shape" << endl;
    }
};

// Derived class for Rectangle, inherits from Shape.
// Overrides displayArea to calculate rectangle area.
class Rectangle : public Shape {
    float l, w;  // Length and width of the rectangle.
public:
    // Constructor to initialize length and width.
    Rectangle(float x, float y) { l = x; w = y; }
    // Override base class method to display rectangle area.
    void displayArea() {
        cout << "Area of Rectangle = " << l * w << endl;
    }
};

// Derived class for Circle, inherits from Shape.
// Overrides displayArea to calculate circle area.
class Circle : public Shape {
    float r;  // Radius of the circle.
public:
    // Constructor to initialize radius.
    Circle(float x) { r = x; }
    // Override base class method to display circle area.
    void displayArea() {
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
};

// Main function to demonstrate polymorphism.
// Creates objects of Rectangle and Circle, uses base class pointer to call displayArea.
int main() {
    Shape* s;  // Pointer to base class for polymorphic behavior.
    Rectangle rect(5, 3);  // Create rectangle with length 5, width 3.
    Circle cir(4);  // Create circle with radius 4.
    s = &rect;  // Point to rectangle.
    s->displayArea();  // Calls Rectangle's displayArea due to polymorphism.
    s = &cir;  // Point to circle.
    s->displayArea();  // Calls Circle's displayArea due to polymorphism.
    return 0;
}
