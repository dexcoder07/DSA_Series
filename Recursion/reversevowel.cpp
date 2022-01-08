#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<vector<int>> vec(5,std::vector<int> (5,0));

int n = 5;

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++){

            cin >> vec[i][j];
        }
    }


    int x = 0;
    int y = 0;
    int flag = 0;

    for(int i = 0 ; i < n ; i++){

        for(int j = 0 ; j < n ; j++){

            if(vec[i][j]==1)
            {
                x = i;
                y = j;
                flag = 1;
            }
        }
    }



    if(flag)
    {
        cout<<(abs(x-2) + abs(y-2));
    }
    else
        cout<<0;

    return 0;
}