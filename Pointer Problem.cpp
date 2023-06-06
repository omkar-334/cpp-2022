#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int *p1, *p2;
    int v1, v2;
    int sum, dif ;
    cin >> v1;
    cin >> v2;
    p1 = &v1;
    p2 = &v2;
    sum =*p1+*p2;
    dif =abs(*p1-*p2);
     cout << sum << endl;
    cout << dif;


    return 0;
}
