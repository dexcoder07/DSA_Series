#include<bits/stdc++.h>
using namespace std;


int main()
{
    int N = 7;
    int A[] = {2,4,6,8,9,10,12};
    int B[] = {2,4,6,8,10,12};

    int sum_a = 0;
    int sum_b = 0;
        
        for(int i = 0 ; i < N ; i++)
        {
            sum_a += A[i];
        }
        for(int i = 0 ; i < N ; i++)
        {
            sum_b += B[i];
        }
        
        cout<<sum_b;
    return 0;
}