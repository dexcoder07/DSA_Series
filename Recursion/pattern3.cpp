#include<bits/stdc++.h>
using namespace std;


void pat3(int n){
    if(n == 0){
        return;
    }

    pat3(n-1);/*
    for(int i = 0 ; i < n ; i++){
        cout << "*" << " ";
    }
*/
    if(n > 0){
        pat3(n-1);
    }
    cout << endl;
}


int main(){

    int n;
    cin >> n;
    pat3(n);
    return 0;
}