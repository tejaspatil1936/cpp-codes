#include <bits/stdc++.h>
using namespace std;

void findUnique(int array[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ array[i];
    }
    cout << "unique element : " << ans << endl;
}

int main()
{
    int MyArray[7] = {1, 98, 7, 4, 1, 98, 7};
    findUnique(MyArray, 7);

    return 0;
}