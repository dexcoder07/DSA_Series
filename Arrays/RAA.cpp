#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int ar[n];

    for(int i = 0 ; i < n ; i++)
    {
        cin>>ar[i];
    }

    int res[n];

    int i = 0;
    int j = n-1;

    int k = 0;
    
    while(i<=j)
    {
        res[k++] = ar[j];
        j--;
        res[k++] = ar[i];
        i++;
    }

    for(int i = 0 ; i < n ; i++)
    {
        cout<<res[i]<<" ";
    }

    return 0;
}