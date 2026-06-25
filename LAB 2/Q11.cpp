#include <iostream>
using namespace std;

int main() {
        int password;
    const int CORRECT_PASSWORD = 2080;

               cout << "Enter password to access control panel: ";
               cin >> password;

        while (password != CORRECT_PASSWORD) {
        cout << "Access denied. Invalid pin code. Please try again.";
        
                cout << "Enter password: ";
                cin >> password;
    }

          cout << "Access granted to control panel.";

    return 0;
}

