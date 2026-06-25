#include <iostream>
using namespace std;

int main() {
        double voltage;

        cout << "Enter the voltage reading in Volts (V): ";
    cin >> voltage;

        if (voltage < 0.0) {
        cout << "Invalid voltage reading";
    } 
    else if (voltage <= 50.0) {
        cout << " V - Low voltage";
    } 
    else if (voltage <= 240.0) {
        cout << " V - Normal voltage";
    } 
    else if (voltage <= 415.0) {
        cout << " V - High voltage";
    } 
    else {
        cout << " V - Dangerous voltage";
    }

    return 0;
}

