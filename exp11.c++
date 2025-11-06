#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;

public:
    // Method to set book details
    void setDetails(string t, string a) {
        title = t;
        author = a;
    }

    // Method to display book details
    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

int main() {
    Book book1;          // Create a Book object
    Book *ptr;           // Declare a pointer to Book
    ptr = &book1;        // Store address of book1 in pointer

    // Access methods using pointer
    ptr->setDetails("The C++ Programming Language", "Bjarne Stroustrup");
    cout << "Book Details:" << endl;
    ptr->display();

    return 0;
}
