#include <iostream>
#include "Dtorclass.h"
using namespace std;

Dtorclass::Dtorclass()
{
    cout << "constructor" << endl;
}

void Dtorclass::Dtorfunction()
{
    cout << "hello" << endl;
}

Dtorclass::~Dtorclass()
{
    cout << "deconstructor" << endl;
}
