#include "exclass.h"
#include <iostream>
using namespace std;

exclass::exclass()
{
    cout << "hi" << endl;
}

void exclass::printMe()
{
    cout << "i am omkar" << endl;
}

void exclass::printconstant() const
{
    cout << "dont change" << endl;
}

exclass::~exclass()
{
    cout << "bye" << endl;
}
