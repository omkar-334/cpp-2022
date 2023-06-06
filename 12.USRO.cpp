#include <iostream>
#include <cmath>
using namespace std;

void PrintNumber(int x)
{
    cout << x << " is an integer" << endl;
}

void PrintNumber(float x)
{
    cout << x << " is a float" << endl;
}


int y=20;
int main()
{
    int a;
    float b;
    int y=69;
    // unary scope resolution operator uses global variable
    cout << ::y << endl;
    cout << " enter integer" << endl;
    cin >> a;
     cout << " enter float" << endl;
    cin >> b;
    PrintNumber(a);
    PrintNumber(b);
    return 0;
}

