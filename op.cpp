#include <bits/stdc++.h>
using namespace std;

int main()
{
   int K = 0, ITEM = 0, N;

   cout << "Enter the size of Array : ";
   cin >> N;
   int Linear_array[N + 1];
   cout << "Enter the Array Element " << endl;
   for (int i = 0; i < N; i++)
   {
      cin >> Linear_array[i];
   }
   cout << endl;
   cout << "Displaying the array : " << endl;
   for (int i = 0; i < N; ++i)
   {
      cout << Linear_array[i] << "\t";
   }
   cout << endl;

   cout << "Enter the element Index you want to delete: ";
   cin >> K;

   ITEM = Linear_array[K];
   for (int J = K; J < N; ++J)
   {
      Linear_array[J - 1] = Linear_array[J];
   }
   N = N - 1;

   cout << "Displaying the array after deletion: " << endl;
   for (int i = 0; i < N; i++)
   {
      cout << Linear_array[i] << "\t";
   }

   return 0;
}