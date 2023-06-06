#include <iostream>
using namespace std;

int x=0;
int main()
{
    int age;
    int total=0;
    int average;

    while(age!=0)
    {
        cout << "enter age or 0 to quit \n";
        cin >> age;
        total+=age;
        x++;
    }
    x-=1;
    cout << "The number of people are " << x << endl;
    cout << "The total age is " << total << endl;
    average=total/x;
    cout << "The average age is " << average << endl;

    return 0;
}


