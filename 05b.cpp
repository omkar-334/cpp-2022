#include <iostream>
using namespace std;

int main()
{
    int x;

    cout << "enter number \n" ;
    cin >> x;

    if(x<5){
        if(x<4){
            if(x<3){
                if(x<2){
                    cout << "One \n";
                    }else{ cout<<"Two" ;}
                }else{ cout<<"Three" ;}
            }else{ cout<<"Four" ;}
        }else{ cout<<"Five" ;}


}