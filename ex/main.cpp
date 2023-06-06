#include <iostream>
#include "exclass.h"
using namespace std;

int main()
{
    exclass object;
    object.printMe();

    const exclass constobj;
    constobj.printconstant();
}

