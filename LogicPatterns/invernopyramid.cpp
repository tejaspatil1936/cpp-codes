#include <iostream>
using namespace std;

void pattern6(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j < N - i + 1; j++)
        {
            cout <<  j << " ";
        }
        cout << endl;
    }
}

int main()
{
    int N = 5;
    pattern6(N);
    return 0;
}
