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


    int low = 0, high = n-1;

    while(low<=high)
    {
        int mid = (low + high)/2;

        if(ar[mid+1]< ar[mid] && ar[mid-1] < ar[mid])
        {
            cout<<ar[mid];
        }
        if(ar[mid+1]<ar[mid])
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    return 0;
}