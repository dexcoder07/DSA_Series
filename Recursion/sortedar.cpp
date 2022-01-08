#include<bits/stdc++.h>
using namespace std;

bool sortedi(int *ar, int i, int n){

    if(i == n){
        return true;
    }
    if(ar[i] < ar[i-1]){
        return false;
    }
    bool x = sortedi(ar, i+1, n);
    return x;
}

int main(){


    int n;
    cin >> n;

    int ar[n];

    for(int i = 0 ; i < n ; i++){
        cin >> ar[i];
    }


    cout << sortedi(ar,0, n);
    return 0;
}