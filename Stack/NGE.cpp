//NEXT GREATER ELEMENT

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<long long> arr(n);

    for(int i = 0 ; i < n ; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }

    vector<long long> ans(n);
        
        stack<int> st;
        
        for(int i = n-1 ; i >=0 ; i--)
        {
            while(!st.empty() && st.top()<=arr[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                ans[i] = -1;
            }
            else
            ans[i] = st.top();
            
           st.push(arr[i]);
           
        }

        for(int i = 0 ; i < n ; i++)
        {
            cout<<ans[i]<<" ";
        }
    return 0;
}