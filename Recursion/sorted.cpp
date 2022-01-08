//Check if the array is sorted or not
#include<bits/stdc++.h>
using namespace std;


bool sorted(int ar[], int n)
{
    if(n==1)
    {
        return true;
    }

    bool restarray = sorted(ar+1,n-1);
    return (ar[0]<ar[1]&& restarray);
}


int main()
{
    int n = 7;

    int ar[7] ;

    for(int i = 0 ; i < n ; i++)
    {
        cin>>ar[i];
    }
    cout<<sorted(ar,n);
    return 0;
}