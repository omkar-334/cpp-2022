#include <iostream>
using namespace std;

int main()
{
    int storey;
    int hero;
    cout << "enter storey number \n";
    cin >> storey;
    cout << "enter hero speed \n";
    cin >> hero;

    while(storey >= 5)
    {
        cout << "Natasha is on the " << storey << "th floor! \n";
        storey = storey - hero;

    }
    cout << "Natasha is safe \n";

//to calculate the sum of n observations

    int x = 1;
    int y;
    cout << "enter number of observations \n";
    cin >> y;
    int a;
    int total = 0;
    while(x <= y)
    {
        cout << "enter observation value \n";
        cin >> a;

        if(x!=y) {cout << "total is " << total+a << endl; }
        else {cout << "Final total is " << total;}

        total=total+a;
        x++;

    }
    return 0;
}


