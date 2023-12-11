#include <bits/stdc++.h>
using namespace std;

float area_of_triangle(float base, float height)
{
    return  (0.5 * base * height) ;
}

int main()
{
    int base, height;

    cout << "Enter the base of the triangle: ";
    cin >> base;

    cout << "Enter the height of the triangle: ";
    cin >> height;

    int area = area_of_triangle(base, height);

    cout << "The area of the triangle is: " << area << endl;

    return 0;
}
