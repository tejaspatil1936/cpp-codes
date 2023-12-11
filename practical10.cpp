#include <iostream>
#include <math.h>
using namespace std;

class AreaShape // areashape navacha class bnvlay jyat area find hoil
{
    float area;// area declare kela jyat area store hoil

public:
    AreaShape(float radius) // ha ahe constructor parameters pass krun radius la value dili ahe 
    {
        area = 3.14 * radius * radius;// area la value dili ahe 
    }

    AreaShape(int length, int breadth)// ithe length ani breadth pass keli ahe karn area la value detana doghancha use hoil area la value detana jyancha jyancha use honar ahe te parameters mdhe pass kraych  
    {
        area = length * breadth;// value dili
    }

    AreaShape(float base, float height)// ithe value detana base ani height pass lagel mhnun ithe base ani height pass keli
    {
        area = 0.5 * (base * height);// value dili 
    }

    void display()// area private ahe mhnun ha getter vaprla 
    {
        cout << "Area:\t" << area << endl;
    }
};

int main()
{
    int ch; // ha switch case sathi ahe 1 asel tr circle cha radius 2 asel tr rectangle asa 
    float radius, height, base; // switch case mdhe bgh cin ghetl ahe mhnun ithe he declare kele ahet vrti aapn te class mde declare kele hote pn te global ani local cha frk asto mhnun prt locally kele  
    int length, breadth;

    do// do loop lavlay karn tyanch aim ahe ki loop chala pahije jo prynt aapn khitri invalid ch nhi takt mnje 1234 sodun 2r khi takl ki loop terminate do while(ch != 4 )mnje 1da run ho jr ch valid asl tr to prynt run ho joprynt ch invalid ahe 
    {
        cout << "1. Area of Circle" << endl;
        cout << "2. Area of Rectangle" << endl;
        cout << "3. Area of Triangle" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter Your Choice:\t";
        cin >> ch;// ithe input ghetla jail 1234 mnje konta area pahije te smjel

        switch (ch)// switch vaprly ani ch pass kel karn ch chi value 1234 asu dhkte na
        {
        case 1:
        {
            cout << "Enter Radius of the Circle:\t"; // 1 asel tr asa cout hoil 
            cin >> radius;// mg radius ghetla jail karn circle cha area ahe 
            AreaShape area(radius);// areashape cha object bnvla area navacha ani radius pass keli ahe karn 10th line mdhe bgh radius ch pass keli hoti ani vrchya line mdhe aapn raius cin keli mg tya cin chi value radius chya ithe yeil 
            area.display();
        }
        break;

        case 2:
        {
            cout << "Enter Length and Breadth of the Rectangle:\t";
            cin >> length >> breadth;// l ani b ghetl cin ani sgl vr explain kel tsch 
            AreaShape area(length, breadth);// 15th line la relate krt he
            area.display();
        }
        break;

        case 3:
        {
            cout << "Enter Base and Height of the Triangle:\t";
            cin >> base >> height;// b ani h kel cin
            AreaShape area(base, height);//20 line la relate krt he val
            area.display();
        }
        break;

        case 4:
            exit(0);

        default:
            cout << "Invalid Choice";
        }
    } while (ch != 4);// ha vrcha loop chalu rahil jo prynt ch is not equal to 4

    return 0;
}
