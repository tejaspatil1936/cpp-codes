// Q no 2
#include <bits/stdc++.h>
using namespace std;
class Rectangle
{
public:
    int length;
    int width;
 
    Rectangle()
    {
        length = 20;
        width = 15;
    }

    void display()
    {
        cout << "length of rectangle : " << length << endl;
        cout << "width of rectangle : " << width << endl;
    }
};
int main()
{
    Rectangle rect;
    rect.display();

    return 0;
}
