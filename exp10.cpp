#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
};

class Circle : public Shape {
    float r;
public:
    Circle(float x) { r = x; }

    void area() {
        cout << "Area of Circle: " << 3.14 * r * r << endl;
    }
};

int main() {
    Circle c(5);
    c.area();
    return 0;
}