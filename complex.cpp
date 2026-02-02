#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    Complex operator + (Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator * (Complex c) {
        return Complex(
            real * c.real - imag * c.imag,
            real * c.imag + imag * c.real
        );
    }

    friend ostream& operator << (ostream& out, Complex& c);
    friend istream& operator >> (istream& in, Complex& c);
};

ostream& operator << (ostream& out, Complex& c) {
    out << c.real << " + " << c.imag << "i";
    return out;
}

istream& operator >> (istream& in, Complex& c) {
    in >> c.real >> c.imag;
    return in;
}

int main() {
    Complex c1, c2;

    cout << "Enter first complex number (real imag): ";
    cin >> c1;

    cout << "Enter second complex number (real imag): ";
    cin >> c2;

    Complex sum = c1 + c2;
    Complex product = c1 * c2;

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;

    return 0;
}
