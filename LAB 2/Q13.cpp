#include <iostream>
using namespace std;

int main() {
        double voltage;
    const int MAX_READINGS = 10;

        cout << "Enter up to " << MAX_READINGS << " consecutive battery voltage readings.";
    cout << "The test will abort immediately if any reading drops below 10.5 V.";
   
       for (int i = 1; i <= MAX_READINGS; ++i) {
        cout << "Reading " << i << " (V): ";
        cin >> voltage;

    if (voltage < 10.5) {
        cout << "Low battery detected. Test stopped.";
        break;
        } 
        else {
        cout << "Battery voltage normal.";
        }
    }

        return 0;
}

