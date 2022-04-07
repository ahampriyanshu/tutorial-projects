#include<bits/stdc++.h>
using namespace std;

int main(){

    int m,n;
    cin >> n;

    int ** p = new int*[m];

    for(int i=0; i<n; i++){
        cin >> m;
        p[i] = new int[m];
        for(int j=0; j<m; j++)
            cin >> p[i][j];
    }

    for(int i=0; i<n; i++){
        delete [] p[i];
    }

    delete [] p;
}