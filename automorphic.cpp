#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 0)
        n = -n;

    int sq = n * n;

    while (n > 0)
    {
        if (n % 10 != sq % 10)
        {
            cout << "no is not automorphic" << endl;
            goto exit;
        }
        n /= 10;
        sq /= 10;
    }

    cout << "no is automorphic" << endl;
exit:
    return 0;
}
