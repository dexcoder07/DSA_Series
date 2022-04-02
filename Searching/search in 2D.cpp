#include<bits/stdc++.h>
using namespace std;

bool row_finder(vector<vector<int>> &matrix, int target){

    int l = 0;
    int r = matrix.size();
    int ans = 0;

    while(l < r){

        int mid = floor((l + r)/2);

        if(matrix[mid][0] == target){
            ans = target;
        }
        else
        if(matrix[mid][0] > target){
            r = mid;
        }
        else{
            l = mid+1;
        }
    }

    if(ans == 0){
        ans = l;
    }
    return ans;
}

[[1,3,5,7],[10,11,16,20],[23,30,34,60]]
13

bool searchMatrix(vector<vector<int>> &matrix, int target){

    int x = row_finder(matrix, target);

    int l = 0;
    int r = matrix[0].size();

    while(l < r){
        int mid = floor(l+r/2);

        if(matrix[x-1][mid] == target){
            return true;
        }
        else
        if(matrix[x-1][mid] > target){
            r = mid;
        }
        else{
            l = mid+1;
        }
    }
return false;
}


int main(){


    int m,n;

    cin >> m >> n;

    int target;
    cin >> target;

    vector<vector<int>> matrix;

    for(int i = 0 ; i < m ; i++){
        vector<int> vec;

        for(int i = 0 ; i < n ; i++){
            int x;
            cin >> x;
            vec.push_back(x);
        }
        matrix.push_back(vec);
    }

    cout << searchMatrix(matrix, target);

    return 0;
}