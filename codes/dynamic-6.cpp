#include<bits/stdc++.h>
using namespace std;

int max(int a, int b){
    return (a > b) ? a : b;
}

inline int max_inline(int a, int b){
    return (a > b) ? a : b;
}

int main(){

    int a = 10;
    int b = 20;

    int d;

    if(a > b) d = a;
    else d = b;

    int e = a > b ? a : b;

    int f = max(a, b);

    int g = max_inline(a, b);
}