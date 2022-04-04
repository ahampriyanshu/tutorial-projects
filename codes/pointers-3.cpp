#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[10];
    cout << a << endl;
    cout << &a[0] << endl;

    a[0] = 10;

    cout << *a << endl;
    cout << a[0] << endl;
    cout << *(a+2) << endl;
    cout << a[2] << endl;
    
    a = a+3;
}
