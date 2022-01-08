#include<bits/stdc++.h>
using namespace std;


void func(vector<int>& ar, vector<int>& ans,int i){

    if(i == ar.size()){
        cout << "[ ";
        for(auto it : ans){
            cout << it << " ";
        }
        cout << "] ";
        cout << endl;
        return;
    }
    ans = ans + to_string(ar[i]);
    func(ar, ans, i+1);
    ans.pop_back();
    func(ar, ans, i+1);
}



void printsubset(int *ar, string str, int i, int n){
    
    if(i==n){
        cout << str << endl;
        return;
    }
    string x = to_string(ar[i]);
    printsubset(ar, str + x, i+1, n);
    printsubset(ar, str, i+1, n);
}


int main(){

    //vector<int> ar = {1,2,3};
    //vector<int> ans;

    //func(ar, ans, 0);

    int ar[] = {1, 2, 3};

    printsubset(ar, "", 0, 3);
    return 0;
}