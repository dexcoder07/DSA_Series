#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;

    stack<int> st;

    string ans;

    for(int i = 0 ; i < s.size() ; i++)
    {
        if(s[i]!='.')
        st.push(int(s[i]));
        if(s[i]=='.' || i==s.size()-1)
        {
            while(!st.empty())
            {
                ans.push_back(st.top());
                st.pop();
            }
            ans.push_back('.');
        }
    }

    ans.pop_back();
    
    for(int i = 0 ; i < ans.size() ; i++)
    {
        cout<<ans[i];
    }
    return 0;
}