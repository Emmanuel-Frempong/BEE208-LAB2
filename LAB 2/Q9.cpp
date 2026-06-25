#include <iostream>
using namespace std;

int main() {
	
    double currentReading = 0.0;

        cout << "Enter current readings in Amperes (A).";
         cin >> currentReading;

    while (currentReading <= 10.0) {
       
             cout << "Enter next current reading: ";
        cin >> currentReading;
    }

    cout << "Overcurrent detected. Monitoring stopped.";
   

    return 0;
}

