#include<bits/stdc++.h>
using namespace std;

void printname(string str, int i){

    if(str[i] == '\0'){
        return;
    }
    printname(str, i+1);

    cout << str[i];
}

int main(){

    string str;
    cin >> str;

    printname(str, 0);
    return 0;
}