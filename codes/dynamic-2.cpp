#include<bits/stdc++.h>
using namespace std;

void increment(int& k){
    k++;
}

int& f(int n){
    int a = n;
    return a;
}

int* g(){
    int a = 10;
    return &a;
}

int main(){

    int i = 10;
    int& j = i;
    i++;

    cout << i << " " << j << endl;

    increment(j);
    cout << i << " " << j << endl;

    int& k = f(i); // Not recommended

    int* l = g(); // Also not recommended
}