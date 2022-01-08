// Swapped array element two pointer approach(iteration wala 2 pointer approach ko recursive way m implement kiye)
// 5 2 3 4 1   ---> 1 4 3 2 5

#include<bits/stdc++.h>
using namespace std;


void swaper(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void rev(int ar[], int i, int n)
{
    if(i>n-i-1)
    return;
    swaper(ar[i],ar[n-i-1]);            
    rev(ar,i+1,n);          
}

int main()
{
    int n;

    int ar[5] = {5,2,3,4,1};
    n = 5;
    rev(ar,0,n);
    
    for(int  i = 0 ; i < n ; i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}