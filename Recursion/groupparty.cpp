#include<bits/stdc++.h>
using namespace std;


int func(int n){

    //base condition
    if(n == 1 || n == 2){
        return n;
    }
    //recursive assumption
    int x = func(n-1) + (n-1) * func(n-2);

    //self work
    return x;
}

int main(){


    int n;
    cin >> n;

    cout<< func(n);
    return 0;
}