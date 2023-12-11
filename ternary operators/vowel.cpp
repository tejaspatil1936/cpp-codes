#include <bits/stdc++.h>
using namespace std;

int main()
{
    char alphabet;
    
    cout << "Enter the alphabet : " << endl;

    cin >> alphabet;

    cout << alphabet <<(alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' || 
                        alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U' ? 
                        " is vowel \n" : " is consonant\n");
  
    return 0;
}