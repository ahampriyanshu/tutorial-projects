#include<bits/stdc++.h>
using namespace std;

int size1(int a[]){
    return sizeof(a);
}

int size2(int * a){
    return sizeof(a);
}

void print(int b[]){
    cout << *b << endl;
}

int main(){

    int a[10];
    int b[] = {1, 2, 3, 4, 5};

    cout << sizeof(a) << endl;
    cout << size1(a) << endl;
    cout << size2(a) << endl;

    print(b);
    print(b+1);
    print(b+3);
}