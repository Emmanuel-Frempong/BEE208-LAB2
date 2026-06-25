#include <iostream>
using namespace std;

int main() {
        int choice;
    double voltage, current, power, time, resistance, energy;

        do {
                cout << "--- Menu-Driven Electrical Calculator ---";
        cout << "1. Calculate Power";
        cout << "2. Calculate Resistance";
        cout << "3. Calculate Energy";
        cout << "4. Exit";
        
        
        cout << "Enter your option (1-4): ";
        cin >> choice;
        
                switch (choice) {
            case 1:
                cout << "[Power Calculation]";
                cout << "Enter Voltage (V): ";
                cin >> voltage;
                cout << "Enter Current (A): ";
                cin >> current;
                
                power = voltage * current;
                std::cout << "Calculated Power: " << power << " W";
                break;

            case 2:
                cout << "[Resistance Calculation]";
                cout << "Enter Voltage (V): ";
                cin >> voltage;
                cout << "Enter Current (A): ";
                cin >> current;
                
                if (current != 0.0) {
                    resistance = voltage / current;
                    cout << "Calculated Resistance: " << resistance << " Ohms";
                } else {
                    cout << "Error: Division by zero. Current cannot be 0 A.";
                }
                break;

            case 3:
                cout << "[Energy Calculation]";
                cout << "Enter Power (W): ";
                cin >> power;
                cout << "Enter Time (hours): ";
                cin >> time;
                
                energy = power * time;
                cout << "Calculated Energy Consumption: " << energy << " Wh";
                break;

            case 4:
                cout << "Exiting system. Thank you for using the calculator!";
                break;

            default:
                cout << "Invalid selection! Please enter a number between 1 and 4.";
                break;
        }
        
           } while (choice != 4); 

    return 0;
}

