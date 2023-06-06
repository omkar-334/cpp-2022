#include <iostream>
using namespace std;

void printArray(int Array[], int size);

int main()
{
//multidimensional arrays
    int z[2][3]={{1,2,3},{4,5,6}};
    // 1,2,3
    // 4,5,6
    // 2 rows , 3 columns

    cout << z[0][2] << endl << endl;

    int a[3]={10,20,30};
    int b[5]={50,100,150,200,250};
    printArray(b, 4);

    for(int row=0;row<2;row++)
    {
        for(int col=0;col<3;col++)
        {
            cout << z[row][col] << " ";
        }
        cout << endl;
    }
}

void printArray(int Array[], int size)
{
    for(int x=0;x<size;x++)
    {
        cout << Array[x] << endl;
    }
    cout << endl;
}

