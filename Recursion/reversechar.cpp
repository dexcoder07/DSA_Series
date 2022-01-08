#include<bits/stdc++.h>
using namespace std;



void fun(vector<char> &s, int i, int n){
    if(i >= n/2)
    {
        return ;
    }

    swap(s[i], s[n-i-1]);

    fun(s,i+1,n);
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<char> ch;

    for(int i = 0 ; i < n ; i++)
    {
        cin>>ch[i];
    }

    reversestring(ch);

    for(auto i : ch)
    {
        cout<<ch<<" ";
    }

    return 0;
}