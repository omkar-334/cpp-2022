#include <iostream>
using namespace std;

int main()
{
    int x;
    long long a;
    cout << "enter number" << endl;
    cin >> a;
    x=a-1;
    cout << a << x << endl;
    for(x;x>0;x-=1)
    {
        a=a*x;
        cout << a << endl;

    }
}
