#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[] = {1, 2, 3};
    char b[] = "abc";

    cout << a << endl;
    cout << b << endl;

    char* c = &b[0];
    cout << c << endl;

    char d = 'a';
    char* pd = &d;

    cout << d << endl;
    cout << pd << endl;    
}