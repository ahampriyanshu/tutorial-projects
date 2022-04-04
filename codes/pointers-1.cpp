#include<bits/stdc++.h>
using namespace std;

int main(){

    int i=10;
    cout << &i << endl;
    int* p = &i;
    cout << p << endl;
    cout << i << " " << *p << endl;
    cout << sizeof(i) << " " << sizeof(p) << endl;
    i++;
    cout << i << " " << *p << endl;

    int a = i;
    a++;

    cout << i << " " << a << endl;

    (*p)++;

    cout << i << " " << *p << endl;
}