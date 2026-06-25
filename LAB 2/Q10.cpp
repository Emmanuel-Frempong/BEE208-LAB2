#include <iostream>
using namespace std;

int main() {
        double voltage;

            cout << "The system will stop if voltage drops below 12 V.";
   

    cout << "Enter battery voltage (V): ";
    cin >> voltage;

       while (voltage >= 12.0) {
        
        cout << voltage << " V - Battery status optimal.";

              cout << "Enter next battery voltage (V): ";
              cin >> voltage;
    }

           cout << "Battery voltage low. Recharge required.";

    return 0;
}

