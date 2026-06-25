#include <iostream>
using namespace std;

int main() {
    double totalVoltage = 0.0;
    double voltageReading = 0.0;
    double averageVoltage = 0.0;
    const int TOTAL_READINGS = 10;

    cout << "=== Sensor Average Voltage Calculator ===";

    for (int i = 1; i <= TOTAL_READINGS; i++) {
        cout << "Enter voltage reading " << i << ": ";
        cin >> voltageReading;

        totalVoltage += voltageReading;
    }

    averageVoltage = totalVoltage / TOTAL_READINGS;

    cout << "Average Voltage: " << averageVoltage << " V";
   

    return 0;
}

