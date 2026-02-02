#include <iostream>
using namespace std;

class Patient {
private:
    float billingAmount;
    string appointmentDate;

public:

    Patient() {
        billingAmount = 0;
        appointmentDate = "Not Assigned";
    }

    Patient(float amount, string date) {
        billingAmount = amount;
        appointmentDate = date;
    }

    void displayDetails() {
        cout << "Billing Amount: " << billingAmount << endl;
        cout << "Appointment Date: " << appointmentDate << endl;
    }
};

int main() {
    Patient p1;  
    Patient p2(1500.50, "10-02-2026"); 

    cout << "Patient 1 Details:" << endl;
    p1.displayDetails();

    cout << "\nPatient 2 Details:" << endl;
    p2.displayDetails();

    return 0;
}
