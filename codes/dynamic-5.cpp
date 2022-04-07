#include<bits/stdc++.h>
using namespace std;

#define PI 3.14

double pi_global = 3.14;

int main(){

    int r;
    double pi_local = 3.14;
    cin >> r;

    // Naive and difficult to update
    cout << 3.14 * r * r << endl;

    // Consumes space, limited scope
    cout << pi_local * r * r << endl;


    // Can be altered/modified by any child func, consumes spac
    cout << pi_global * r * r << endl;

    // global, constant, doesn't consume space
    cout << PI * r * r << endl;

}