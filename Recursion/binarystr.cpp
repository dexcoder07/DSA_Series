#include<bits/stdc++.h>
using namespace std;


int func(int n){
    if(n == 0 || n == 1){
        return n+1;
    }

    int x1 = func(n-1);
    int x2 = func(n-2);

    return x1+x2;
}

int main(){


    int n;
    cin >> n;

    cout<< func(n);
    return 0;
}