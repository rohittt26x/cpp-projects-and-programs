#include <iostream>
using namespace std;

class Add {
public:
    inline int sum(int a, int b) {
        return a + b;
    }
};

int main() {
    Add obj;
    int result = obj.sum(10, 20);
    cout << "Sum = " << result << endl;
    return 0;
}
