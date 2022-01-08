#include<bits/stdc++.h>
using namespace std;


int fact(int n){
    //Base condition
    if(n == 1){
        return 1;
    }

    //Recursive assumption
    int subproblem = fact(n-1);

    //Self work
    return n * subproblem;
}


int main(){

    clock_t begin = clock();
    int n;
    cin >> n;

    cout << fact(n);
    clock_t end = clock();

    cout << "\n\nExecution Time : " << double(end - begin) / CLOCKS_PER_SEC * 1000 << "ms";
    return 0;
}