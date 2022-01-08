#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;

        string ar;
        cin>>ar;
        n = ar.size();

        int maxlength = 0;

        for(int i = 0 ; i < n ; i++)
        {
            for(int j = i+1 ; j < n ; j+=2)
            {
                int length = j - i +1;

                int x = i;
                int y = j;
                
                int sum_x = 0;
                int sum_y = 0;

                while(x<y)
                {
                    sum_x += (int)ar[x];
                    sum_y += (int)ar[y];
                    x++;
                    y--;
                }

                if(sum_x==sum_y && maxlength<length)
                {
                    maxlength = length;
                }
            }
        }
        cout<<maxlength<<endl;
    }
    return 0;
}