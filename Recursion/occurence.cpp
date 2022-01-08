#include<bits/stdc++.h>
using namespace std;


void occur(int ar[],int n,int key)
{
    if(n==-1)
    {
        return;
    }
    occur(ar,n-1,key);
    if(ar[n]==key)
    {
        cout<<n<<" ";
    }
}
int main()
{
    int n;
    cin>>n;

    int ar[n];

    for(int i = 0 ; i < n ; i++)
    {
        cin>>ar[i];
    }

    int key;
    cin>>key;

    occur(ar,n,key);

    return 0;
}