#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= 2 * n - 1; col++) {

            // Top row
            if (row == 1) {
                
                    cout << "*";
                
            }

            // Last row
            else if (row == n) {
                if (col == n)
                    cout << "*";
                else
                    cout << " ";
            }

            // Middle rows (hollow)
            else {
                if (col == row || col == 2 * n - row)
                    cout << "*";
                else
                    cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
