#include <iostream>
#include <string>
#include "Birthday.h"
#include "People.h"
using namespace std;

int main()
{
    Birthday object(03,03,2004);
    People random("Omkar",object);
    random.printInfo();
}
