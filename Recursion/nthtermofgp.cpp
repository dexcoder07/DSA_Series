#include<bits/stdc++.h>
using namespace std;


int pwr(int R, int N){

    if(N == 0){
        return 1;
    }

    int val = pwr(R, N-1);

    return val * R;

}

int nthterm(int N, int A, int R){

    //base condition
    return A * pwr(R, N-1);
}
int main(){

    clock_t begin = clock();
    int t;

    while(t--){
        int n;
        cin >> n;

        int a, r;
        cin >> a >> r;

        cout << nthterm(n,a,r);
        cout << endl;
    }

    clock_t end = clock();

    cout << "\n\nExecution Time : " << double(end - begin) / CLOCKS_PER_SEC * 1000 << "ms";
    return 0;
}