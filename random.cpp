// // #include <iostream>
// // #include <cmath>
// // using namespace std;

// // int main() {
// //     float a, b, c, discriminant, root1, root2;

// //     cout << "Enter coefficient of a: ";
// //     cin >> a;
// //     cout << "Enter coefficient of b: ";
// //     cin >> b;
// //     cout << "Enter coefficient of c: ";
// //     cin >> c;

// //     discriminant = b * b - 4 * a * c;

// //     if (discriminant > 0) {
// //         root1 = (-b + sqrt(discriminant)) / (2 * a);
// //         root2 = (-b - sqrt(discriminant)) / (2 * a);
// //         cout << "The roots are real and unequal" << endl;
// //         cout << "Root 1 = " << root1 << endl;
// //         cout << "Root 2 = " << root2 << endl;
// //     } else if (discriminant == 0) {
// //         root1 = root2 = -b / (2 * a);
// //         cout << "The roots are real and equal" << endl;
// //         cout << "Root 1 = Root 2 = " << root1 << endl;
// //     } else {
// //         cout << "The roots are unreal" << endl;
// //         cout << "Root 1 = " << -b / (2 * a) << " + " << sqrt(-discriminant) / (2 * a) << "i" << endl;
// //         cout << "Root 2 = " << -b / (2 * a) << " - " << sqrt(-discriminant) / (2 * a) << "i" << endl;
// //     }
// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;

// // int main() {
// //     int t;
// //     cin >> t;

// //     while (t--) {
// //         float N, a, b, P;
// //         cin >> N;

// //         a = N * 50;
// //         b = 0.7 * a;
// //         P = a - b;

// //         cout << P << endl;
// //     }
// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;

// // int main() {
// //     int a[3][4];
// //     int i, j, s = 0;

// //     cout << "Enter the matrix:" << endl;

// //     for (i = 0; i < 3; i++) {
// //         for (j = 0; j < 4; j++) {
// //             cout << "Enter element at position (" << i << ", " << j << "): ";
// //             cin >> a[i][j];
// //         }
// //     }

// //     for (i = 0; i < 3; i++) {
// //         for (j = 0; j < 4; j++) {
// //             s += a[i][j];
// //         }
// //     }
// //     cout << "The sum of matrix is " << s << endl;

// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;

// // int main() {
// //     int a, b, c;
// //     cout << "Enter three numbers: ";
// //     cin >> a >> b >> c;

// //     if (a > b && a > c) {
// //         cout << "a" << endl;
// //     }
// //     if (b > c && b > a) {
// //         cout << "b" << endl;
// //     }
// //     if (c > a && c > b) {
// //         cout << "c" << endl;
// //     }

// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;

// // int main() {
// //     int n, s = 0;

// //     do {
// //         cout << "Enter any number: ";
// //         cin >> n;
// //         s += n;
// //     } while (n != 0);

// //     cout << "Sum = " << s << endl;
// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;

// // int main() {
// //     int t;
// //     cin >> t;

// //     while (t--) {
// //         int x, y, z;
// //         cin >> x >> y >> z;

// //         if (x % z == 0 && y % z == 0) {
// //             cout << "yes" << endl;
// //         } else {
// //             cout << "no" << endl;
// //         }
// //     }
// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;

// // int main() {
// //     int t;
// //     cin >> t;

// //     int i = 0;
// //     while (i < t) {
// //         int a, b, c, x, y;
// //         cin >> a >> b >> x >> y;

// //         if (a == b || (a > b && y > a - b) || (a < b && x > b - a)) {
// //             cout << "yes" << endl;
// //         } else {
// //             cout << "no" << endl;
// //         }
// //         i++;
// //     }

// //     return 0;
// // }

// //
// // #include <iostream>
// // using namespace std;

// // int main(){

// // return 0;
// // }

// // #include <iostream>
// // using namespace std;

// // int main(){
// //    int i,j,n;
// //    for (i=0;i<5;i++) {

// //     for (j=0;j<)
// //    }
// // return 0;
// // }

// // #include <iostream>
// // using namespace std;

// // int main() {
// //     int rows;

// //     cout << "Enter the number of rows: ";
// //     cin >> rows;

// //     for(int i = 1; i <= rows; ++i) {
// //         for(int j = 1; j <= i; ++j) {
// //             cout << "* ";
// //         }
// //         cout << endl;
// //     }

// //     return 0;
// // }
// // #include <bits/stdc++.h>
// // using namespace std;

// // int main(){

// // return 0;
// // // }
// // if (condition) {

// // } else {

// // }
// // if (condition) {

// // }

// // #include <bits/stdc++.h>
// // using namespace std;

// // int main(){
// //    if (rsdfghf) {
// //        tdhhi
// //    }
// // return 0;
// // }

// // for (int i = 0; i < 4; i++) {

// // }

// // cout << "dfgghjgjh" << endl;dhd

// // #include <iostream>
// // using namespace std;

// // int main() {
// //   int n;
// //   cin >> n;

// //   // Check if the number is 0.
// //   if (n == 0) {
// //     cout << "Not a duck number";
// //     return 0;
// //   }

// //   // Initialize a variable to store the first digit of the number.
// //   int firstDigit = n % 10;

// //   // Iterate over the digits of the number.
// //   while (n > 0) {
// //     // If the current digit is 0, break the loop.
// //     if (n % 10 == 0) {
// //       break;
// //     }

// //     n /= 10;
// //   }

// //   // If the first digit is not 0, the number is a duck number.
// //   if (n > 0) {
// //     cout << "Duck number";
// //   } else {
// //     cout << "Not a duck number";
// //   }

// //   return 0;
// // // }
// // #include <bits/stdc++.h>
// // using namespace std;

// // int main()
// // {
// //   int n, r;
// //   int found = 0;
// //   cin >> n;

// //   while (n > 0)
// //   {
// //     r = n % 10;
// //     if (r == 0)
// //     {
// //       found++;
// //     }
// //     n = n / 10;
// //   }

// //   if (found != 0)
// //   {
// //     cout << "it is a duck no\n";
// //   }
// //   else
// //   {
// //     cout << "ot is not a duck no\n";
// //   }

// //   return 0;
// // }
// // #include <iostream>
// // using namespace std;

// // int main()
// // {
// //     float time = (45.5) / 60;
// //     cout << "The time in hours is " << time << "\n";
// //     float mile = 14 / 1.6;
// //     cout << "The speed in miles is " << mile << "\n";
// //     cout << "Average speed of runner in miles is " << mile / time;

// //     return 0;
// // }

// // #include <bits/stdc++.h>
// // using namespace std;

// // int main()
// // {
// //     int a = 6;
// //     cout << "a / 10 = " << a / 10 << endl;
// // return 0;
// // }

// // //Unary Operator overloading
// // #include <iostream>
// // using namespace std;
// // class Demo
// // {
// //     private:
// //     int a, b;
// //     public:
// //     Demo(int x,int y)
// //     {
// //         a=x;
// //         b=y;
// //     }
// //     int show()
// //     {
// //         cout<<"A = "<<a<<" "<<"B = "<<b<<endl;
// //     }
// //     void operator -()
// //     {
// //         a=-a;
// //         b=-b;
// //     }
// // };
// // int main()
// // {
// //     Demo d(-10,20);
// //     d.show();
// //     -d;
// //     d.show();
// //     return 0;
// // }
// // #include <iostream>
// // using namespace std;

// // class Base {
// // public:
// //     virtual void print() {
// //         cout << "Base Function" << endl;
// //     }
// // };

// // class Derived : public Base {
// // public:
// //     void print() {
// //         cout << "Derived Function" << endl;
// //     }
// // };

// // int main() {
// //     Derived derived1;
// //     // pointer of Base type that points to derived1
// //     Base* base1 = &derived1;
// //     // calls member function of Derived class
// //     base1->print(); // This will print "Derived Function"
// //     return 0;
// // }

// // // Output: Derived Function
// // #include <iostream>
// // #include <math.h>
// // using namespace std;

// // class AreaShape {
// //     float area;

// // public:
// //     AreaShape(float radius) {
// //         area = 3.14 * radius * radius;
// //     }

// //     AreaShape(int length, int breadth) {
// //         area = length * breadth;
// //     }

// //     AreaShape(float base, float height) {
// //         area = 0.5 * (base * height);
// //     }

// //     void display() {
// //         cout << "Area:\t" << area << endl;
// //     }
// // };

// // int main() {
// //     int ch;
// //     float radius, height, base;
// //     int length, breadth;

// //     do {
// //         cout << "1. Area of Circle" << endl;
// //         cout << "2. Area of Rectangle" << endl;
// //         cout << "3. Area of Triangle" << endl;
// //         cout << "4. Exit" << endl;
// //         cout << "Enter Your Choice:\t";
// //         cin >> ch;

// //         switch (ch) {
// //             case 1: {
// //                 cout << "Enter Radius of the Circle:\t";
// //                 cin >> radius;
// //                 AreaShape a(radius);
// //                 a.display();
// //             }
// //             break;

// //             case 2: {
// //                 cout << "Enter Length and Breadth of the Rectangle:\t";
// //                 cin >> length >> breadth;
// //                 AreaShape a(length, breadth);
// //                 a.display();
// //             }
// //             break;

// //             case 3: {
// //                 cout << "Enter Base and Height of the Triangle:\t";
// //                 cin >> base >> height;
// //                 AreaShape a(base, height);
// //                 a.display();
// //             }
// //             break;

// //             case 4:
// //                 exit(0);

// //             default:
// //                 cout << "Invalid Choice";
// //         }
// //     } while (ch != 4);

// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;

// // class AreaOfCircle
// // {
// //     int radius;

// // public:
// //     void get()
// //     {
// //         cout << "Enter the radius of Circle : ";
// //         cin >> radius;
// //     }
// //     friend float calculate(AreaOfCircle a);
// // };

// // float calculate(AreaOfCircle a)
// // {
// //     return 3.14 * a.radius * a.radius;
// // }

// // int main()
// // {
// //     AreaOfCircle obj;
// //     obj.get();
// //     cout << "Area of Circle : " << calculate(obj) << endl;
// //     return 0;
// // }

// #include <iostream>
// using namespace std;

// class Rectangle
// {
// private:
//     float length;

// public:
//     float breadth;
//     void Enter_lb()
//     {
//         cout << "\n Enter the length of the rectangle : ";
//         cin >> length;
//         cout << "\n Enter the breadth of the rectangle : ";
//         cin >> breadth;
//     }
//     float get_l()
//     {
//         return length;
//     }
// };

// class Rectangle1 : public Rectangle
// {
// private:
//     float area;

// public:
//     void Rec_area()
//     {
//         area = get_l() * breadth;
//     }
//     void Display()
//     {
//         cout << "\n Length = " << get_l();
//         cout << "\n Breadth = " << breadth;
//         cout << "\n Area = " << area;
//     }
// };

// int main()
// {
//     Rectangle1 r1;
//     r1.Enter_lb();
//     r1.Rec_area();
//     r1.Display();
//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;

// class AreaShape
// {
//     float area;

// public:
//     AreaShape(float radius)
//     {
//         area = 3.14 * radius * radius;
//     }

//     AreaShape(int length, int breadth)
//     {
//         area = length * breadth;
//     }

//     AreaShape(float base, float height)
//     {
//         area = 0.5 * (base * height);
//     }

//     void display()
//     {
//         cout << "Area:\t" << area << endl;
//     }
// };
// // int main()
// {
//     int ch;
//     float radius, height, base;
//     int length, breadth;

//     do
//     {
//         cout << "1. Area of Circle" << endl;
//         cout << "2. Area of Rectangle" << endl;
//         cout << "3. Area of Triangle" << endl;
//         cout << "4. Exit" << endl;
//         cout << "Enter Your Choice:\t";
//         cin >> ch;

//         switch (ch)
//         {
//         case 1:
//         {
//             cout << "Enter Radius of the Circle:\t";
//             cin >> radius;
//             AreaShape area(radius);
//             area.display();
//         }
//         break;

//         case 2:
//         {
//             cout << "Enter Length and Breadth of the Rectangle:\t";
//             cin >> length >> breadth;
//             AreaShape area(length, breadth);
//             area.display();
//         }
//         break;

//         case 3:
//         {
//             cout << "Enter Base and Height of the Triangle:\t";
//             cin >> base >> height;
//             AreaShape area(base, height);
//             area.display();
//         }
//         break;

//         case 4:
//             exit(0);

//         default:
//             cout << "Invalid Choice";
//         }
//     } while (ch != 4);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int add(int n);

// int main()
// {
//     int n;
//     cout << "Enter a positive integer: ";
//     cin >> n;
//     cout << "Sum = " << add(n);
//     return 0;
// }

// int add(int n)
// {
//     if (n != 0)
//         return n + add(n - 1);
//     return 0;
// }
























// #include <iostream>
// using namespace std;
// class Car
// {
// public:
//     string brand;
//     string model;
//     int year
// };
// int main()
// {
//     // Create an object of Car
//     Car carObj1;
//     carObj1.brand = "BMW";
//     carObj1.model = "X5";
//     carObj1.year = 1999;
//     // Create another object of Car
//     Car carObj2;
//     carObj2.brand = "Ford";
//     carObj2.model = "Mustang";
//     carObj2.year = 1969;
//     // Print attribute values
//     cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
//     cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 5;
    if (!x > -2)
    {
        cout << "c" << endl;
    }
    else
    cout << "d" << endl;
    
return 0;
}