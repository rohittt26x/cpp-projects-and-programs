#include <iostream>
using namespace std;

class Counter {
private:
    static int count;

public:
    static void increment() {
        count++;
    }

    static void showCount() {
        cout << "Count value: " << count << endl;
    }
};

int Counter::count = 0;

int main() {
    Counter::increment();
    Counter::increment();
    Counter::showCount();

    return 0;
}
