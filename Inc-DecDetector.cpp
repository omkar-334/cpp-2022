#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
int newValue ;
int oldValue=0;
int newDiff;
   int oldDiff=1;
   int Product;
   int counter=0;


   while (true){

        oldDiff=newDiff;
        oldValue=newValue;

    cin >> newValue ;


    newDiff = oldValue - newValue ;


    cout << newDiff << endl ;


    Product = newDiff * oldDiff;

            if(Product<0){counter++ ;}
            else{counter=counter+0 ;}

    cout << counter << endl;
    cout << endl ;
}

}
