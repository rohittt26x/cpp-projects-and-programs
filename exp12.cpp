#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Class A\n";
    }
};

class B : public A {
public:
    void show() {
        cout << "Class B\n";
    }
};

int main() {
    B obj;
    obj.show();
}