#include <iostream>
using namespace std;

int main() {
       double appliancePower;
       double totalLoad = 0.0;
       const double LOAD_LIMIT = 3000.0;

        cout << "Enter appliance power ratings in Watts (W) sequentially.";
        cout << "Maximum safe capacity threshold: " << LOAD_LIMIT << " W";
    

    while (totalLoad <= LOAD_LIMIT) {
       cout << "Enter appliance power rating (W): ";
       cin >> appliancePower;

        totalLoad += appliancePower;

       if (totalLoad <= LOAD_LIMIT) {
            cout << ">> Total load safe: " << totalLoad << " W";
        }
    }

       cout << "Load limit exceeded. Do not add more appliances.";
       cout << "Final Total Load: " << totalLoad << " W";

    return 0;
}

