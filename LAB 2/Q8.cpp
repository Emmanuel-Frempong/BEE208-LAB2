#include <iostream>
using namespace std;

int main() {
    double currentReading = 0.0;
    int safeCount = 0;
    int unsafeCount = 0;
    const int TOTAL_READINGS = 8;
    const double SAFE_LIMIT = 10.0;

    cout << "=== Current Reading Safety Analyzer ===";

    for (int i = 1; i <= TOTAL_READINGS; i++) {
    	
        cout << "Enter current reading " << i << ": ";
        cin >> currentReading;

        if (currentReading <= SAFE_LIMIT) {
        	
            safeCount++;
        } else {
            unsafeCount++;
        }
    }

    cout << "Analysis Results:" << endl;
    cout << "Safe Readings (<= 10 A): " << safeCount << endl;
    cout << "Unsafe Readings (> 10 A): " << unsafeCount << endl;
  

    return 0;
}

