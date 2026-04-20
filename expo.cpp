#include <iostream>
using namespace std;

class Employee {
protected:
    int id;
public:
    void getId() {
        cout << "Enter ID: ";
        cin >> id;
    }
};

class Department : public Employee {
protected:
    string dept;
public:
    void getDept() {
        cout << "Enter Department: ";
        cin >> dept;
    }
};

class Salary : public Department {
private:
    float salary;
public:
    void getSalary() {
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display() {
        cout << id << " " << dept << " " << salary << endl;
    }
};

int main() {
    Salary s;
    s.getId();
    s.getDept();
    s.getSalary();
    s.display();
}