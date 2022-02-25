#include<bits/stdc++.h>
using namespace std;

//Normal Solution: Complexity => TC = O(2^n), SC = O(1) but auxillary = O(height or N)
int fibonacci(int n){
    if(n == 0 || n == 1){
        return n;
    }

    int left = fibonacci(n-1);
    int right = fibonacci(n-2);

    return left + right;
}

//Memoizaton technique ( Top down approach => Bara problem ko solve krne k liye chota pe ja rhe h.)
//Optimized solution using Dynamic Programming. TC = O(N), SC = O(N);
// Vector pass kiye h becoz agar interviewer bole ki global variable use ni krna h to reference pass kar do koi data structure ka.
int fibo(int n, vector<int> &dp){
    if(n == 0 || n == 1){
        return n;
    }

    if(dp[n] != -1){
        return dp[n];
    }

    return dp[n] = fibo(n-1, dp) + fibo(n-2, dp);
}


//Tabulation technique (Bottom-up approach => Chota problem ka solution mere pass hai to chota se ab bara pe ja rhe h)
//TC = O(N), SC = O(N)

int tab_fibonacci(int n, vector<int> &dp){

    dp[0] = 0;
    dp[1] = 1;

    for(int i = 2 ; i <= n ; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];

}



//Optimized solution of tabulation technique.
//TC = O(N), SC = O(1) => Instead of array we will use variables.

int opt_fibonacci(int n){

    int prev = 1;
    int prev2 = 0;

    int current;

    for(int i = 2 ; i <= n ; i++){
        current = prev2 + prev;
        prev2 = prev;
        prev = current;
    }

    return current;
}


int main(){
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif


    int n;
    cin >> n;
    vector<int> dp (n+1, -1);
    cout << tab_fibonacci(n, dp);

    return 0;
}