#include <iostream>
#include <cmath>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    int height;
    int age;
    cout << "enter value 1 or 2" << endl;
    cin >> height;
    cout << "enter age" << endl;
    cin >> age;
    switch(height)
    {
        case 1:
            cout << "go" << endl;
            break;
        case 2:
            cout << "wait" << endl;
            break;
        default:
            cout << "die" << endl;
    }
    if(height>1 && !age<18)
    {
        cout << "burn" << endl;
    }
    else{ cout << "welcome" << endl;}


//code to generate a random number between 1 to 100
//range is 0 to 32767

srand(time(0));
   for(int x=1;x<=5;x++)
    {
         cout << 1+(rand()%100) << endl;
    }
    return 0;
}
