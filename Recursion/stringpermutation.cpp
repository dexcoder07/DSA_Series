#include<bits/stdc++.h>
using namespace std;

void strpermu(string str,int i, string opt, vector<string> &res){

    //base case
    if( i == str.size()){
        res.push_back(opt);
        return ;
    }

    strpermu(str, i+1, opt + str[i], res);
    strpermu(str, i+1, opt, res);
}
int main(){

    string str;
    cin >> str;
    vector<string> ans;
    strpermu(str, 0, "", ans);


    for(auto it : ans){
        cout << it << " ";
    }
    return 0;
}