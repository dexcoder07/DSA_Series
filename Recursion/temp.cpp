#include<bits/stdc++.h>
using namespace std;

void fun(int ind, int *ar, int n, std::vector<int> &v){

    if(n==ind){
        for(int i = 0 ; i < v.size() ; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

    v.push_back(ar[ind]);
    fun(ind+1, ar, n, v);
    v.pop_back();
    fun(ind+1,ar, n, v);
}

int main()
{
    int ar[] = {1,2,3,5,7};
    vector<int> ans;
    fun(0,ar,3,ans);
    return 0;
}