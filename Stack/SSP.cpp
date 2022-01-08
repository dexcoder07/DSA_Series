//STOCK SPAN PROBLEM

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin>>n;

    int price[n];

    for(int i = 0 ; i < n ; i++)
    {
        cin>>price[i];
    }

    stack<int> stk;
    stk.push(0);

    vector<int> s(n);
    s[0] = 1;

    
        for(int i = 1 ; i < n ; i++)
        {
            while(!stk.empty() && price[stk.top()] <= price[i])
            {
                stk.pop();
            }
    
            s[i] = (stk.empty()) ? (i+1) : (i - stk.top());
    
            stk.push(i);
        }
	

	for(int i = 0 ; i < n ; i++)
	{
		cout<<s[i]<<" ";
	}
    
	return 0;
}