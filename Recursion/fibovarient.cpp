#include<bits/stdc++.h>
using namespace std;

int consec(int n){
    if(n == 0 || n == 1){
        return n+1;
    }

    int sub1 = consec(n-1);
    int sub2 = consec(n-2);

    return sub1 + sub2;
}

int main(){

    int n;
    cin >> n;
    cout << consec(n);
    return 0;
}