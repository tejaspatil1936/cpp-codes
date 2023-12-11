#include <iostream>
using namespace std;
int add(int n);// ithe fkt funvtion declare kelay ani define int main chya khali kela ahe chalt tasa pn
int main()
{
    int n;// ithe last no declare kelay mnje kuth prynt ch sum pahije te
    cout << "Enter a positive integer: ";
    cin >> n;// input ghetla
    cout << "Sum = " << add(n);//ithe add n ha function call kela  
    return 0;
}
int add(int n)// ithe define kela add n  function
{
    if (n != 0)// jr n = 0 nsel tr 
        return n + add(n - 1); // return n + add(n - 1) mnje ata smj ata n 5 ahe tr return hoil 5 + add(4) mg add 4 mnje return 4 + add 3 asa jail te 0 prynt 0 ala ki stop hoil mnje swatach call hot rahil function in function 
    return 0;
}
