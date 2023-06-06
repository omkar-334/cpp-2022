#include <iostream>
using namespace std;

void omkar()
{
    cout << "hi";
    omkar();
}
int Factorial(int z)
{
    if(z==1){return 1;}
    else{return z*Factorial(z-1);}
}
int main()
{
    int y;
    cout << "enter number " << endl;
    cin >> y ;
    cout << "hello \n" << Factorial(y) << endl;
}
