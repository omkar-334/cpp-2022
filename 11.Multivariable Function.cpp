#include <iostream>
#include <cmath>
#include <cstdlib>
#include <time.h>
using namespace std;

int y=20;
int volume(int x=1, int y=1, int z=1);

int main()
{
    cout << volume();
    int y=69;
    cout << ::y << endl;
}

int volume(int x, int y, int z)
{
    return x*y*z;
    return 0;
}
