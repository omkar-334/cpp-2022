#include <iostream>
#include "People.h"
#include <string>
#include "Birthday.h"
using namespace std;

People::People(string x,Birthday bo)
: name(x), DOB(bo)
{

}

void People::printInfo()
{
    cout << name << " was born on ";
    DOB.printDate();
}

People::~People()
{
    //dtor
}
