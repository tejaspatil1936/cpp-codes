// #include <iostream>
// #include <limits>

// using namespace std;

// int main()
// {
//     cout << "limits for int:" << endl;
//     cout << "lower Limit: " << numeric_limits<int>::min() << endl;
//     cout << "upper Limit: " << numeric_limits<int>::max() << endl;

//     cout << "limits for short int:" << endl;
//     cout << "lower Limit: " << numeric_limits<short int>::min() << endl;
//     cout << "upper Limit: " << numeric_limits<short int>::max() << endl;

//     cout << "limits for long int:" << endl;
//     cout << "lower Limit: " << numeric_limits<long int>::min() << endl;
//     cout << "upper Limit: " << numeric_limits<long int>::max() << endl;

//     cout << "limits for long long int:" << endl;
//     cout << "lower Limit: " << numeric_limits<long long int>::min() << endl;
//     cout << "upper Limit: " << numeric_limits<long long int>::max() << endl;

//     return 0;
// }

#include <iostream>
#include <climits>
#include <cfloat>
using namespace std;
int main()
{
    int INT;
    float FLOAT;
    char CHAR;
    double DOUBLE;
    short SHRT;
    cout << "THE MAX VALUE OF INT DATA TYPE: " << INT_MAX << endl;
    cout << "THE MIN VALUE OF INT DATA TYPE: " << INT_MIN << endl;
    cout << "THE MAX VALUE OF FLOAT DATA TYPE: " << FLT_MAX << endl;
    cout << "THE MIN VALUE OF FLOAT DATA TYPE : " << FLT_MIN << endl;
    cout << "THE MIN VALUE OF CHAR DATA TYPE : " << CHAR_MIN << endl;
    cout << "THE MIN VALUE OF CHAR DATA TYPE: " << CHAR_MAX << endl;
    cout << "THE MAX VALUE OF LONG DATA TYPE: " << LONG_MAX << endl;
    cout << "THE MIN VALUE OF LONG DATA TYPE: " << LONG_MIN << endl;
    cout << "THE MAX VALUE OF SHORT DATA TYPE: " << SHRT_MAX << endl;
    cout << "THE MIN VALUE OF SHORT DATA TYPE: " << SHRT_MIN << endl;
    return 0;
}