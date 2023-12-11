#include <iostream>
using namespace std;

int main() {
    int matrix[3][4];
    int i, j, sum = 0;

    cout << "Enter the elements of the matrix:" << endl;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            cout << "Enter element at position (" << i << "," << j << "): ";
            cin >> matrix[i][j];
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            sum += matrix[i][j];
        }
    }

    cout << "Sum of all elements in the matrix: " << sum << endl;

    return 0;
}
