#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, s1, s2, cs1 = 0, cs2 = 0, max_lead = 0, max_leader = 1;
    cin>>n;

    for(int i=0; i<n; i++){
        cin >> s1 >> s2;

        cs1 += s1;
        cs2 += s2;

        int curr_lead = 0;
        int curr_leader = 1;

        if(cs1 > cs2){
            curr_lead = cs1 - cs2;
        }else{
            curr_lead = cs2 - cs1;
            curr_leader = 2;
        }

        if(curr_lead > max_lead){
            max_lead = curr_lead;
            max_leader = curr_leader;
        }
        
    }

    cout << max_leader << " " << max_lead << endl;

    return 0;

}