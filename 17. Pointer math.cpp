#include <iostream>
using namespace std;

int main()
{
    int a[3];
    int *a0 = &a[0];
    int *a1 = &a[1];
    int *a2 = &a[2];

    cout << "a0 is at " << a0 << endl;
    cout << "a1 is at " << a1 << endl;
    cout << "a2 is at " << a2 << endl;

    a2+=1;
    cout << "______a2 is now at " << a2 << endl;
}
