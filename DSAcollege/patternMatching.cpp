#include <bits/stdc++.h>
using namespace std;

int main()
{
    int lengthOfReq, lengthOfMain, K, L, Max, foundAt;
    char Req[] = ("bab");  // desired string(lengthofreq)
    char Main[] = ("aabbbabb"); // parent string(lengthofmain)

    lengthOfReq = strlen(Req); // length of req
    lengthOfMain = strlen(Main); // length of main
    K = 0; // iterator for main
    Max = lengthOfMain - lengthOfReq + 1; 
    // cout << lengthOfReq <<  " " << lengthOfMain << endl;
    while (K <= Max)
    {
        for (L = 0; L <= lengthOfReq; L++) // iterator for required
        {
            if (Req[L] != Main[K + L])
                break;

            if (L == lengthOfReq-1)
            {
                foundAt = K;
                break;
            }

        }
        if (L == lengthOfReq-1)
        {
            foundAt = K;
            break;
        }
        K++;
    }
        if (K > Max)
            foundAt = 0;

        cout << "P = " << Req << endl;
        cout << "T = " << Main << endl;

        if (foundAt != 0)
        {
            cout << "foundAt of Req in Main = " << foundAt << endl;
        }
        else
        {
            cout << "Req does not exist in Main " << endl;
        }
    
    return 0;
}


// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int R, S, K, L, Max, Index;
//     char P[] = ("bab");
//     char T[] = ("aabbbabb");

//     R = strlen(P);
//     S = strlen(T);
//     K = 1; 
//     Max = S - R + 1;

//     while (K <= Max)
//     {
//         for (L = 1; L <= R; L++) 
//         {
//             if (P[L - 1] != T[K + L - 2]) 
//                 break;

//             if (L == R)
//             {
//                 Index = K;
//                 break;
//             }
//         }
//         if (L == R)
//             break;

//         K = K + 1;
//     }

//     if (K > Max)
//         Index = 0;

//     cout << "P = " << P << endl;
//     cout << "T = " << T << endl;

//     if (Index != 0)
//     {
//         cout << "Index of P in T = " << Index << endl;
//     }
//     else
//     {
//         cout << "P does not exist in T " << endl;
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int lengthOfReq, lengthOfMain, K, L, Max, foundAt;
//     char Req[] = ("bab");  // desired string(lengthofreq)
//     char Main[] = ("aabbbabb"); // parent string(lengthofmain)

//     lengthOfReq = strlen(Req); // length of req
//     lengthOfMain = strlen(Main); // length of main
//     K = 1; // iterator for main
//     Max = lengthOfMain - lengthOfReq + 1; 
//     // cout << lengthOfReq <<  " " << lengthOfMain << endl;
//     while (K <= Max)
//     {
//         for (L = 1; L <= lengthOfReq; L++) // iterator for required
//         {
//             if (Req[L-1] != Main[K + L-2])
//                 break;

//             if (L == lengthOfReq)
//             {
//                 foundAt = K;
//                 break;
//             }

//         }
//         if (L == lengthOfReq)
//         {
//             foundAt = K;
//             break;
//         }
//         K++;
//     }
//         if (K > Max)
//             foundAt = 0;

//         cout << "P = " << Req << endl;
//         cout << "T = " << Main << endl;

//         if (foundAt != 0)
//         {
//             cout << "string found at : " << foundAt << endl;
//         }
//         else
//         {
//             cout << "Req does not exist in Main " << endl;
//         }
    
//     return 0;
// }