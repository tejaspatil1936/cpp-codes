#include <iostream>
using namespace std;

int main() {
    int n[15], i, even = 0, odd = 0;
    cout << "Enter numbers:" << endl;

    for (i = 0; i < 15; i++) {
        cin >> n[i];

        if (n[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    cout << even << " numbers are even" << endl;
    cout << odd << " numbers are odd" << endl;

    return 0;
}
