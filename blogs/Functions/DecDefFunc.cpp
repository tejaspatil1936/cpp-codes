// we can define the function below the main function 
// but it should be declared above the main function 
/
#include <bits/stdc++.h>
using namespace std;

// Function declaration
void myFunction();

// The main method
int main() {
  myFunction();  // call the function
  return 0;
}

// Function definition
void myFunction() {
  cout << "I just got executed!";
}
