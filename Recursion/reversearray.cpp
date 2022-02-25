#include<bits/stdc++.h>
using namespace std;


// using backtracking

void reverse_array(vector<int> &vec, int n, int i){

    //Base case (jiska answer hmko pta hai)
    if(i >= n){
        return;
    }

    //recursive relation
    reverse_array(vec, n, i+1);

    //self-work
    cout << vec[i] << " ";
}


// using two pointers
void swapArray(vector<int> &vec, int l, int r){

    if(l>r){
        return;
    }
    else{
        swap(vec[l],vec[r]);
        swapArray(vec, l+1, r-1);
    }
}


// using one pointers

void swapArray2(vector<int> &vec, int i){

    if(i > vec.size()/2){
        return;
    }

    swap(vec[i], vec[vec.size() - i - 1]);
    swapArray2(vec, i+1);
}

int main(){

#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    vector<int> arr;
    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    reverse_array(arr, n, 0);

    // for(auto it : arr){
    //     cout << it << " ";
    // }
	return 0;
}