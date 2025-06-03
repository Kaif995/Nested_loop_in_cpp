#include <iostream>

using namespace std;

int main() {
    int num = 0;
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 4; c++) {
            cout << num << " ";
            num++;
        }
        cout << "\n";
    }
    return 0;
}

