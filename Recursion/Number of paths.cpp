#include<bits/stdc++.h>
using namespace std;

void path(int m, int n, int idx1, int idx2, int &sum){

    if(idx1 > m || idx2 > n){
        return;
    }
    if(idx1 == m-1 && idx2 == n-1){
        sum++;
    }

    path(m, n, idx1+1, idx2, sum);
    path(m, n, idx1, idx2+1, sum);
}

int main(){

    int n, m;
    cin >> n >> m;

    int sum = 0;
    path(m,n,0,0,sum);

    cout << sum;
    return 0;
}