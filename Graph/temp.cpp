#include<bits/stdc++.h>
using namespace std;


int main(){

#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

    pair<int,int> pi[3];
    pi[0] = make_pair(1,2);
    pi[1] = make_pair(3,4);
    pi[2] = make_pair(4,5);

    cout << pi[1].first;
	return 0;
}