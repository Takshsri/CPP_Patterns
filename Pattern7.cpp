/*
      *
    * *
  * * *
* * * *

*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int row = 1; row <= n; row++) {

        // print spaces
        for (int space = 1; space <= n - row; space++) {
            cout << "  ";
        }

        // print stars
        for (int col = 1; col <= row; col++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}


