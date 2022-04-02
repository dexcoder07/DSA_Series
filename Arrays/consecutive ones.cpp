#include<bits/stdc++.h>
using namespace std;

void subSeq(string s, int idx, string st, string t){
    if(idx == s.size()){
        if(st == t){
            cout << "YES";
        }
        return;
    }

    st.push_back(s[idx]);
    subSeq(s,idx+1, st, t);
    st.pop_back();
    subSeq(s, idx+1, st, t);
}

int main(){

#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

   string str1;
   cin >> str1;

   string str2;
   cin >> str2;

   subSeq(str1, 0, "", str2);
    
    return 0;
}