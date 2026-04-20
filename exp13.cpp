#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base Display\n";
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived Display\n";
    }
};

int main() {
    Base* b;
    Derived d;
    b = &d;
    b->display();
}