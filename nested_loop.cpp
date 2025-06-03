#include <iostream>
using namespace std;

int main() {
    // Outer loop
    for (int i = 1; i <= 3; i++) {
        cout << "Outer loop iteration: " << i << endl;

        // Inner loop
        for (int j = 1; j <= 2; j++) {
            cout << "  Inner loop iteration: " << j << endl;
        }
    }

    return 0;
}

