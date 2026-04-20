#include <iostream>
using namespace std;

class Student {
protected:
    int roll;
    string name;

public:
    void getStudent() {
        cout << "Enter roll and name: ";
        cin >> roll >> name;
    }
};

class Result : public Student {
private:
    float marks;

public:
    void getMarks() {
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Roll: " << roll << "\nName: " << name
             << "\nMarks: " << marks << endl;
    }
};

int main() {
    Result r;
    r.getStudent();
    r.getMarks();
    r.display();
    return 0;
}