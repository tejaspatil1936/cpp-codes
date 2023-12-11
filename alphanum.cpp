#include <iostream>

using namespace std;

int main() {
  char ch;
  int i, n;

  cout << "Enter the number of alphabets: ";
  cin >> n;


  for (i = 0; i < n; i++) {
    ch = 'A' + i;
    cout << ch << "\t\t" << int(ch) << "\t\t" << i + 1 << endl;
  }

  return 0;
}
