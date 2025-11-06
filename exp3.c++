#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    // set values
    void setDimensions(float l, float w) {
        length = l;
        width = w;
    }

    // calculate area
    float calculateArea() {
        return length * width;
    }

    // display area
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
