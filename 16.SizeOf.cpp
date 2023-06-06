#include <iostream>
using namespace std;

int main ()
{
    int c;
    long long x;
    double y[9];
    cout << sizeof(c) << endl;
    cout << sizeof(x) << endl;
    cout << sizeof(y) << endl;
    cout << "the number of elements is " <<sizeof(y) / sizeof(y[0]) << endl;
    return 0;
}
