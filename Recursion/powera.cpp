#include<bits/stdc++.h>
using namespace std;


int func(int a, int b){
    if(b == 1){
        return a;
    }

    int x = func(a, b-1);

    return a * x;
}

int main(){

    int a, b;

    cin >> a >> b;

    cout << func(a,b);
    return 0;
}