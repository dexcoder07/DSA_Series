#include<bits/stdc++.h>
using namespace std;


bool binary_search(vector<int> &arr, int n, int target){

    int low = 0;
    int high = n-1;

    while(low < high){

        int mid = (low+high)/2;

        if(arr[mid] == target){
            return true;
        }
        else
        if(arr[mid] < target){
            low = mid+1;
        }
        else{
            high = mid;
        }
    }

    return false;
}

int main(){

    int n;
    cin >> n;
    int target;
    cin >> target;

    vector<int> arr;

    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    if(binary_search(arr, n, target)){
        cout << "YES";
    }    
    else{
        cout << "NO";
    }

    return 0;
}