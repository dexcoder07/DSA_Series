#include<bits/stdc++.h>
using namespace std;

//Q. Remove atmost one character and check if it is palindrome or not.

/* Logic: 
If the edge index(0 and n-1) values are equal then we have to check if the value inside the edge index are equal.
eg : abbxa

so here as you can see:
0th index a and n-1th index a is equal. So we mode to 1st and n-2 index value checking.
value at 1st and n-2th index is not equal. So, we check if removing b of 1st index will make the string palindrome=>abxa is not a palindrome so we will not remove this b.
Now we will remove n-2th index value x=> abba yes this is a palindrome so it will return true;*/

bool isPal(string s, int i, int j)
{
    while(i < j){
        if(s[i] != s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}


bool validPalindrome(string s){

    int i = 0;
    int j = s.size() -1 ;

    while(i < j){
        if(s[i] !=  s[j]){
            if(isPal(s, i+1, j) || isPal(s, i, j-1))
            {
                return true;
            } 
            else{
                return false;
            }
        }
        i++;
        j--;
    }
return true;
}

int main(){

    string str;

    cin >> str;

    cout << validPalindrome(str);


    return 0;
}