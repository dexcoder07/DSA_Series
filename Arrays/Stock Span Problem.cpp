#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;

    int ar[n];

    int stk[n] = {1};
    int top = 0;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>ar[i];
    }

    for(int i = 1 ; i < n ; i++)
    {
        stk[i] = 1;

        for(int j = i-1 ; (j>=0 && ar[i]>=ar[j]) ; j--)
        {
            if(ar[i]>=ar[j])
            {
                stk[i]++;
            }
        }
    }

    for(int i = 0 ; i < n ; i++)
    {
        cout<<stk[i]<<" ";
    }

    return 0;
}