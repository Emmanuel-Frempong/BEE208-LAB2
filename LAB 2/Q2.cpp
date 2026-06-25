#include <iostream>
using namespace std;

int main() {
       double ratedCurrent;
    double measuredCurrent;

       cout << "Enter the rated current of the circuit breaker (A): ";
       cin >> ratedCurrent;

       cout << "Enter the measured current in the circuit (A): ";
       cin >> measuredCurrent;

       if (measuredCurrent > ratedCurrent) {
        cout << "Overload detected. Circuit breaker should trip.";
    } 
    else {
        cout << "Current is within safe limit.";
    }

    return 0;
}

