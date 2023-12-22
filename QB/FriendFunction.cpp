// Q no 3
#include <bits/stdc++.h>
using namespace std;

class Square
{
private:
    int side;

public:
    // Default constructor
    Square()
    {
        side = 10; // default side length
    }

    // Friend function declaration
    friend int printSideLength(Square);
};

// Friend function definition
int printSideLength(Square s)
{
    s.side += 10;  // Increasing the side length by 10
    return s.side; // Returning the new side length
}

int main()
{
    Square s;

    cout << "Side length of Square: " << printSideLength(s) << endl;

    return 0;
}
