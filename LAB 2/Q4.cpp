#include <iostream>
using namespace std;

int main() {
     int choice;

        cout << "1. Resistor";
        cout << "2. Capacitor";
        cout << "3. Diode";
        cout << "4. Transistor";
        cout << "5. LED";
        
        cout << "Enter your choice (1-5): ";
        cin >> choice;

         switch (choice) {
        case 1:
            cout << "Resistor: Used to limit current in a circuit.";
            break;
        case 2:
            cout << "Capacitor: Used to store electrical energy in an electric field.";
            break;
        case 3:
            cout << "Diode: Allows current to flow in one direction only.";
            break;
        case 4:
            cout << "Transistor: Used to amplify or switch electrical signals and power.";
            break;
        case 5:
            cout << "LED: A light-emitting diode that releases energy in the form of photons.";
            break;
            
            default:
            
            cout << "Invalid selection";
            break;
    }

    return 0;
}

