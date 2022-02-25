#include<bits/stdc++.h>
using namespace std;

int callfun(int *arr, int n){
    int i = 0, j = n - 1;
    
    while(i < j){
        if(arr[i] < arr[j]){
            j--;
        }
        
        if(arr[i] > arr[j]){
            i++;
        }
        if(i == j){
            return arr[i];
        }
    }
    
    return arr[i];
}

int main(){


    
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0 ; i < n ; i ++){
        cin >> arr[i];
    }


    cout << callfun(arr, n);
    return 0;
}