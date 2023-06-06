#include <iostream>
#include "MLI.h"
using namespace std;

MLI::MLI(int a , int b)
:regVar(a), constVar(b)
{

}

void MLI::output()
{
    cout << " regular variable is " << regVar << endl;
    cout << " constant variable is " << constVar << endl;
}

MLI::~MLI()
{
    cout << " end" << endl;
}
