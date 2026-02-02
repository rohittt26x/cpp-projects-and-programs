#include <iostream>
using namespace std;

class Sample {
private:
    int number;

public:
    Sample(int n) {
        number = n;
    }

    friend void showNumber(Sample obj);
};

void showNumber(Sample obj) {
    cout << "Private Number: " << obj.number << endl;
}

int main() {
    Sample s(25);
    showNumber(s);
    return 0;
}
