#include<bits/stdc++.h>
using namespace std;


int main(){

#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    vector<int> vec;

    for(int i = 0 ; i< n ; i++){
        int x;
        cin >> x;
        vec.push_back(x);
    }

    int p = 5;
    for(auto it : vec){
        cout << (it ^ p) << " ";
    }
	return 0;
}