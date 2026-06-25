#include <iostream>
using namespace std;

int main() {
        double temperature;
    double totalTemperature = 0.0;
    double averageTemperature;
    int validCount = 0;
    const int TOTAL_READINGS = 10;

       cout << "--- Temperature Data Processor ---";
       cout << "Please enter " << TOTAL_READINGS << " temperature readings.";
       cout << "Note: Readings below 0\u00B0C are invalid and will be skipped.";
    
        for (int i = 1; i <= TOTAL_READINGS; ++i) {
        cout << "Reading " << i << " (\u00B0C): ";
        cin >> temperature;

    if (temperature < 0.0) {
        cout << " Invalid";
        continue;
        }

            totalTemperature += temperature;
            validCount++;
    }

     
    if (validCount > 0) {
        averageTemperature = totalTemperature / validCount;
        cout << "Total Valid Readings Processed: " << validCount;
        cout << "The calculated average temperature is: " << averageTemperature;
	} else {
                    cout << "Error: No valid temperature readings were provided. Cannot calculate average.";
    }

    return 0;
}

