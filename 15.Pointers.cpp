#include <iostream>
using namespace std;

void passByValue(int a);
void passByReference(int *a);

int main()
{
    int x=3;
    int y=5;
    int z=10;
    cout << &x << endl;

    int *xp;
    xp=&x;
    cout << xp << endl;

//pbV and pbR
    passByValue(y);
    passByReference(&z);

    cout << "y new value is " << y << endl;
    cout << "z new value is " << z << endl;
}

void passByValue(int a)
{
    a=99;
}
void passByReference(int *a)
{
    *a=22;
}

