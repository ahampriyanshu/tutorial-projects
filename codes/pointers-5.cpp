#include<bits/stdc++.h>
using namespace std;

void print(int* p){
    cout << *p << endl;
}

void increment1(int* p){
    p++;
}

void increment2(int* p){
    (*p)++;
}

int main(){

    int i = 10;
    int *p= &i;

    print(p);
    increment1(p);   
    print(p);

    print(p);
    increment2(p);   
    print(p);
}