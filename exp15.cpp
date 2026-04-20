#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    try {
        if (b == 0)
            throw "Division by zero error";

        cout << "Result = " << a / b;
    }
    catch (const char* msg) {
        cout << msg;
    }

    return 0;
}