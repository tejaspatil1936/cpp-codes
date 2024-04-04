// Matrix multipication algo
#include <iostream>
using namespace std;
int main()
{
    int i, j, m, p, n, k;

    cout << "Enter the dimension of array A:\n";
    cin >> m >> p;
    int A[m][p];

    cout << "Enter the number of columns of array B:\n";
    cin >> n;
    int B[p][n];

    cout << "Enter the elements of the array A\n";
    for (i = 0; i < m; i++)
        for (j = 0; j < p; j++)
            cin >> A[i][j];

    cout << "Enter the elements of the array B\n";
    for (i = 0; i < p; i++)
        for (j = 0; j < n; j++)
            cin >> B[i][j];

    cout << "The array A\n";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            cout << A[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "The array B\n";
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << B[i][j] << "\t";
        }
        cout << "\n";
    }
    /*Matrix multiplication begins here*/
    int C[m][n];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < p; k++)
                C[i][j] = C[i][j] + (A[i][k] * B[k][j]);
        }
    }
    /*Displaying the product matrix*/
    cout << "The array C\n";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << C[i][j] << "\t";
        }
        cout << "\n";
    }
}