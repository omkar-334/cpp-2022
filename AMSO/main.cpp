#include <iostream>
#include "AMSOclass.h"
using namespace std;

int main()
{
    AMSOclass object;
    object.AMSOfunction();

    // arrow member selection pointer
    AMSOclass *pointer = &object;
    pointer -> AMSOfunction();
}
