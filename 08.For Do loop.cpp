#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x=5;
    for(x;x<=50;x+=5)
    {
        cout << x << endl;
    }

    float p;
    int t;
    int years;
    float r;
    float a;
    float y;
    cout << "enter principle amount \n";
    cin >> p;
    cout << "enter time period in years \n";
    cin >> t;
    cout << "enter interest rate \n";
    cin >> r;
    r=r/100;
    r=r+1;
        y= pow(r,t) ;
        a=p*y ;
        cout << y << "___" << a << endl;
    cout << "The interest to be paid is " << a-p << endl;
    cout << "The total amount to be paid is " << a << endl;
    int c = round(a);
    cout << c << endl;
    do
    {
        cout << c << endl;
        c++;
        c=c%2;
        c=round(c);
    }while(c>1);



}
