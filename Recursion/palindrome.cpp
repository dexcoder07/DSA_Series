#include<bits/stdc++.h>
using namespace std;



bool palindrome(string str, int i,int n){

    if(i>n/2)
    {
        return true;
    }
    if(str[i] != str[n-i-1])
    {
        return false;
    }
    else{
        bool ans = palindrome(str,i+1,n);
        return ans;
    }
}
int main()
{
    string s = "abcddcba";
    cout<<palindrome(s,0,s.size());
    return 0;
}