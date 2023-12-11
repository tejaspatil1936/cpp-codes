#include <iostream>
using namespace std;
class Rectangle // class bnvla rectangle navacha
{
private:
    float length; // length private mhnun declare keli

public:
    float breadth; // bredth declare keli publically 
    void Enter_lb() // ha  ahe setter jo l ani b chi value set krel 
    {
        cout << "\n Enter the length of the rectangle : ";
        cin >> length;
        cout << "\n Enter the breadth of the rectangle : ";
        cin >> breadth;
    }
    float get_l()// he ahe getter jo length return krel karn length private ahe 
    {
        return length;
    }
};
class Rectangle1 : public Rectangle // dusra rectangle bnvla class ani tyat vrchya prop inherit kelya
{
private:
    float area;// ya mdhe area ha nvin member ahe ha privately declare kela

public:
    void Rec_area()// ha ahe setter jo area chi value set krel 
    {
        area = get_l() * breadth; // area = l * b pn length private ahe vrti so length chya aivaji aapn length cha gettel vaprla getl_l()
    }
    // area = length * breadth ; can't be used here
    void Display()// ha dekhil getter ch ahe jo length breadth ani area chi value get krel
    {
        cout << "\n Length = " << get_l();
        cout << "\n Breadth = " << breadth;
        cout << "\n Area = " << area;
    }
};
int main()
{
    Rectangle1 r1;// rectangle 1 cha obj bnvla 
    r1.Enter_lb(); // ha l ani b set krayla call kela ha rectangle mdhun rectangle 1 mdhe inherit kela ahe line 10 ani 22 
    r1.Rec_area(); // ha area chi value set krayla hi method rectangle 1 chi swtachi ahe line 28
    r1.Display(); // he geeter call kela l b ani area get krayla line 33 rd shi related ahe 
    return 0;
}