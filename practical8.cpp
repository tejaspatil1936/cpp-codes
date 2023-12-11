#include <iostream>
Using namespace std;
class AreaOfCircle//class bnvla area of circle
{
    int radius;// radius privately declare kela

public:
    void get()// getter publically define kela jo radius cout krel karn radius private ahe 
    {
        cout << "Enter the radius of Circle : ";
        cin >> radius;
    }
    friend float calculate(AreaOfCircle a);// friend mhnun declare kela calculate function he friend ahe class cha member nhi mnje class chya sglya members la access kru shkto private dekhil 
};
float calculate(AreaOfCircle a)// friend function define kela ahe ani area of circle cha obj bnvun pass kela ahe karn 17 th line mdhe bgh a.radius ahe mhnun 
{
    return 3.14 * a.radius * a.radius;// he return hoil 
}
int main()
{
    AreaOfCircle obj;// ithe obj bnvla area of circle cha 
    obj.get();// ithe radius input ghetli 8th line bgh 
    cout << "Area of Circle : " << calculate(obj) << endl;// calculate obj aplyala area return krel mhnun he friend function call kel 
    return 0;
}