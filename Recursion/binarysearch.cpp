#include<bits/stdc++.h>
using namespace std;


int binary_s(int *ar,int l, int r, int n, int x)
{

    // If element is not present in the array.
    if(x < 0 || x > n-1)
        return -1;

    //calculating the mid element.
    int mid = (l+r)/2;

    //checking the mid element is equal to the given element
    if(ar[mid]==x)
    {
        return mid;
    }
    
    
    if(ar[mid] < x)
    {
        return binary_s(ar,mid+1,r,n,x);
                                                    //int ans =  binary_s(ar,mid+1,r,n,x);
                                                    //return ans;
    }
    else
    {
        return binary_s(ar,l, mid-1, n,x);
                                                    //int ans =  binary_s(ar,l,mid-1,n,x);
                                                    //return ans;
    }
}


int main()
{
    int ar[] = {1,2,3,4,5,6,7};
    int x = 5;

    int p = binary_s(ar,0,6,7,x);
cout<<p;
    return 0;
}