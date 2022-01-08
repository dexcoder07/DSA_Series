#include<bits/stdc++.h>
using namespace std;


void fun(int ind, int ar[], int n, vector<int> &rest,int sum)
{
    if(ind==n)
    {
        rest.push_back(sum);
        return;
    }

    sum += ar[ind];

    fun(ind+1, ar, n, rest, sum);

    sum -= ar[ind];

    fun(ind+1,ar, n, rest, sum);
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;

    int ar[n];
    
    for(int i = 0 ; i < n ; i++)
    {
        cin>>ar[i];
    }

    vector<int> ans;
    int sums = 0;

    fun(0, ar, n, ans, sums);
    sort(ans.begin(),ans.end());
    for(int i = 0 ; i < ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}