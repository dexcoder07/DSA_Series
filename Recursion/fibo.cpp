#include<bits/stdc++.h>
using namespace std;

int fibon(int n)
{
    if(n==0 || n==1)
    return n;
    
    return fibon(n-1) + fibon(n-2);
}

int main()
{
    int n;
    cin>>n;
    cout<<fibon(n);
    return 0;
}