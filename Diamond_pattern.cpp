#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 4; i++) {
        // Print leading spaces
        for (int j = 1; j <= 4 - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int k = 1; k <= 2 * i - 1; k++) {  
            cout << "*";
        }
        cout << endl;
    }
       for (int i = 3; i <= i; i--) {
        // Print leading spaces
        for (int j = 1; j <= 4 - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int k = 1; k <= 2 * i - 1; k++) {  
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
