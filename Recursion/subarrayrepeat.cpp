#include<bits/stdc++.h>
using namespace std;


int countF(int ind, int sum, int ar[], int n){

    if(n==ind){
        if(sum == 0)
        {
            return 1;
        }
        else
            return 0;
    }

    int left = 0;
    int right = 0;


    if(ar[ind] <= sum){

        sum += ar[ind];
        left = countF(ind, sum, ar, n);
        sum -= ar[ind];
    }

    right = countF(ind+1, sum, ar, n);

    return (left+right);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int arr[2] = {1,2};


    cout<<countF(0,2,arr,1);

    return 0;
}