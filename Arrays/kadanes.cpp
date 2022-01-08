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

    int sum = 0;
    int maximum = 0;

    int x = 0;
    int y = 0;

    for(int i = 0 ; i < n ; i++)
    {
        sum +=ar[i];
        if(sum>maximum)
        {
            maximum = sum;
            y=i;
        }
        if(sum<0)
        {
            sum = 0;
            x = i+1;
        }
    }
    if(maximum>0)
    {
        cout<<"Starting index: "<<x;
        cout<<"\nEnding index: "<<y;
        cout<<"\nmaximum sum: "<<maximum;
    }


    return 0;
}