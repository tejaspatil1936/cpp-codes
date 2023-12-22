#include <bits/stdc++.h>
using namespace std;
class Rectangle
{
public:
    int length;
    int width;

    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }

    void display()
    {
        cout << "length of rectangle : " << length << endl;
        cout << "width of rectangle : " << width << endl;
    }
};
int main()
{
    Rectangle rect(20, 10);
    rect.display();

    return 0;
}
