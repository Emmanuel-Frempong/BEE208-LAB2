#include <iostream>
using namespace std;

int main() {
       double gpa;

       cout << "Enter student's GPA: ";
       cin >> gpa;

      if (gpa >= 3.5) {
        cout << "Eligible for engineering scholarship.";
    } 
    else {
        cout << "Not eligible for engineering scholarship.";
    }

    return 0;
}

