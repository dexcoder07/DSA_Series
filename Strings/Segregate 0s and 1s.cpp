//Method 1


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

        int z_count = 0;
        int o_count = 0;
        
        for(int i = 0 ; i < n ; i++)
        {
            if(arr[i]==0)
            {
                z_count++;
            }
            if(arr[i]==1)
            {
                o_count++;
            }
        }
        
        for(int i = 0 ; i < z_count ; i++)
        {
            arr[i] = 0;
        }
        
        for(int i = z_count ; i < n ; i++)
        {
            arr[i] = 1;
        }

    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

/*

//Method 2

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

    int i = 0 , j = n-1;

    while(i<=j)
    {
        while(ar[i]!=1)
        {
            i++;
        }
        while(ar[j]!=0)
        {
            j--;
        }

        if((ar[i]==1 && ar[j]==0) && i<j)
        {
            ar[i] ^= ar[j];
            ar[j] ^= ar[i];
            ar[i] ^= ar[j];
        }
    }

    for(int i = 0 ; i < n ; i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}

*/