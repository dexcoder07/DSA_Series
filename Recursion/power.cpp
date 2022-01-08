#include<bits/stdc++.h>
using namespace std;

int powerr(int n,int p)
{
    if(p==0)
    return 1;

    return n * powerr(n,p-1);
}

int main()
{
    int n,p;
    cin>>n>>p;
    cout<<powerr(n,p);
    return 0;
}