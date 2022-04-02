#include<bits/stdc++.h>
using namespace std;


int main(){


    string s;
    cin >> s;

    unordered_map<char, int> mpp;

    mpp['I'] = 1;
    mpp['V'] = 5;
    mpp['X'] = 10;
    mpp['L'] = 50;
    mpp['C'] = 100;
    mpp['D'] = 500;
    mpp['M'] = 1000;

    int n = s.size();
    int sum = mpp[s[n-1]];
    char prev = s[n-1];


    for(int i = s.size() - 2 ; i >=0 ; i--){
        if(mpp[prev] <= mpp[s[i]]){
            sum += mpp[s[i]];
        }
        else{
            sum -= mpp[s[i]];
        }
        prev = s[i];
    }


    cout << sum;
    return 0;
}