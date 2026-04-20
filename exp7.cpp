#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;

public:
    Complex() { real = imag = 0; }
    Complex(float r, float i) { real = r; imag = i; }

    Complex operator+(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator*(Complex c) {
        return Complex(real * c.real - imag * c.imag,
                       real * c.imag + imag * c.real);
    }

    friend istream& operator>>(istream &in, Complex &c) {
        cout << "Enter real part: ";
        in >> c.real;
        cout << "Enter imaginary part: ";
        in >> c.imag;
        return in;
    }

    friend ostream& operator<<(ostream &out, Complex c) {
        out << c.real << " + " << c.imag << "i";
        return out;
    }
};

int main() {
    Complex c1, c2;

    cin >> c1 >> c2;

    cout << "Sum: " << (c1 + c2) << endl;
    cout << "Product: " << (c1 * c2) << endl;

    return 0;
}