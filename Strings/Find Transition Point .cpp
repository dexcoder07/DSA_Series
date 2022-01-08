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


    int res = -1;
    
    int low = 0 ;
    int high = n-1;
    
    while(low<=high)
    {
        int mid = (low+high)/2;
        
        if((((mid-1<0 || mid+1>=n) || (arr[mid-1]==0 && arr[mid+1]==1)) && (arr[mid]==1)))
        {
            res = mid;
        }
        if(arr[mid]==0)
        {
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    
    cout<<res;
    return 0;
}