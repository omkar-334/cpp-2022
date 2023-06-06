#include <iostream>
using namespace std;

int main()
{
//for smaller arrays

    //array initializer list
    int array[5]={1,2,3,4,5};

    //array index
    cout << array[0] << endl ;
    // array elements start from 0

 //for larger arrays

    int array2[10];
    cout << "element ----- value" << endl;
    for(int x=0;x<=9;x++)
    {
        array2[x]=100;
        cout << x << " ----- " << array2[x] << endl;
    }



    int array3[3]={5,10,15};
    int sum=0;

    for(int x=0;x<3;x++)
    {
        sum+=array3[x];
        cout << sum << endl;
    }


}
