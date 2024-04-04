#include <bits/stdc++.h>
using namespace std;

int main()
{
    int mat1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int mat2[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    int mat3[2][2];

    // Multiply mat1 and mat2
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            mat3[i][j] = 0;
            for (int k = 0; k < 3; ++k)
            {
                mat3[i][j] = mat3[i][j] + mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Print the mat3ultant matrix
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            cout << mat3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
