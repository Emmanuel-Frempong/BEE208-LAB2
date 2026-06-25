#include <iostream>
using namespace std;

int main() {
      int choice;
    double voltage, current, power, time, resistance, energy;

       cout << "1. Calculate DC Power";
       cout << "2. Calculate Resistance using Ohm's Law";
       cout << "3. Calculate Energy Consumption";
     
      cout << "Enter your choice (1-3): ";
      cin >> choice;

          switch (choice) {
        case 1:
           cout << "[DC Power Calculation]";
           cout << "Enter Voltage (V): ";
           cin >> voltage;
           cout << "Enter Current (A): ";
           cin >> current;
            
            power = voltage * current;
           cout << "Calculated Power: " << power << " W";
            break;

        case 2:
           cout << "[Resistance Calculation (Ohm's Law)]";
           cout << "Enter Voltage (V): ";
           cin >> voltage;
           cout << "Enter Current (A): ";
           cin >> current;
            
                       if (current != 0.0) {
                resistance = voltage / current;
                cout <<  "Calculated Resistance: " << resistance << " Ohms";
            } else {
                cout << "Error: Current cannot be zero.";
            }
            break;

        case 3:
            cout << "[Energy Consumption Calculation]";
            cout << "Enter Power (W): ";
            cin >> power;
            cout << "Enter Time (hours): ";
            cin >> time;
            
            energy = power * time;
            cout << "Calculated Energy Consumption: " << energy << " Watt-hours";
            break;

        default:
           cout << "Invalid selection";
            break;
    }

    return 0;
}

