#include <iostream>
using namespace std;

class xclass
{
public:
    xcon(){xvar=0;}  //constructor
private:
    int xvar;

friend void xfun(xcon &xobj);  //friend prototyping
};

void xfun(xcon &xobj)
{
    xobj.xvar=99;
    cout << xobj.xvar << endl;
}

int main
{
    xcon object;
    xfun(object);
}
