#include <iostream>
using namespace std;
class AccessDemo {
private:
    int privateVar;
protected:
    int protectedVar;
public:
    int publicVar;
    AccessDemo() {
        privateVar = 10;
        protectedVar = 20;
        publicVar = 30;
    }
    void showPrivate() {
        cout << "Private Variable = " << privateVar << endl;
    }
};
class Derived : public AccessDemo {
public:
    void showProtected() {
        cout << "Protected Variable = " << protectedVar << endl;
    }
};
int main() {
    AccessDemo obj;
    Derived d;
    cout << "Public Variable = " << obj.publicVar << endl;
    obj.showPrivate();
    d.showProtected();
    return 0;
}


