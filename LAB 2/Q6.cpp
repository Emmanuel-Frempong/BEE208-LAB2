#include <iostream>
using namespace std;

int main() {
    double totalResistance = 0.0;
    double resistorValue = 0.0;

    cout << "=== Series Resistor Calculator ===";

    for (int i = 1; i <= 5; i++) {
        cout << "Enter value for Resistor " << i << ": ";
        cin >> resistorValue;

        totalResistance += resistorValue;
    }
    
    cout << "Total Resistance: " << totalResistance << " Ohms";

    return 0;
}

