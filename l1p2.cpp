#include <bits/stdc++.h>
using namespace std;

int main() {
    int dividend, divisor, quotient, remainder;

    cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    if (divisor == 0) {
        cout << "Error: Divisor cannot be zero." << endl;
        return 1;  // Return an error code
    }

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;

    return 0;
}
