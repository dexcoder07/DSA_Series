#include<bits/stdc++.h>
using namespace std;

void sump(int n){
    
    //base condition
    cout << n << " ";
    if(n == 1){
        return;
    }
    sump(n-1);
    cout << n << " ";
}

int main(){

    clock_t begin = clock();
    int n;
    cin >> n;

    sump(n);
    clock_t end = clock();

    cout << "\n\nExecution Time : " << double(end - begin) / CLOCKS_PER_SEC * 1000 << "ms";
    return 0;
}