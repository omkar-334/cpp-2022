#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int y;

    cout << "enter number \n" ;
    cin >> y;

    if(x!=y){
            if(x<=y){cout << y << " is higher \n";}
            else {cout << y << " is lower \n" ;}
        cout << "help me \n" ;
    }
    else{
       cout << "leave me alone \n";
    }


}
