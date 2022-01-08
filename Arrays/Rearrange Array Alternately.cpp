#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }

    int res[n];
    int j = n-1;
    int k = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(i%2==0)
        {
            res[i] = arr[j];
            j--;
        }
        else{
            res[i] = arr[k];
        }
    }

    for(int i = 0 ; i < n ; i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}