#include<bits/stdc++.h>
using namespace std;


stack<int> reverseTheGroups(stack<int> &s, int n, int k) {
    // Write your code here.
    
    stack<int> st;
    
        for(int i = 0 ; i < k ; i++){
            if(!s.empty()){
                st.push(s.top());
                s.pop();   
            }
        }
        while(!st.empty()){
            cout << st.top();
            st.pop();
        }
        return st;
}


int main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    stack<int> sx = reverseTheGroups(s, 6, 2);  

    return 0;
}