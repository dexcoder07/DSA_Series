#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
	// Write your code here. 
    vector<pair<int,int>> pix;
    pair<int,int> pi;

    sort(arr.begin(), arr.end());

    int low = 0;
    int high = arr.size()-1;

    while(low < high){
        if(arr[low] + arr[high] == target){
            pi = {arr[low], arr[high]};
            pix.push_back(pi);
            //break;
        }
        if(arr[low] + arr[high] > target){
            high--;
        }
        else{
            low++;
        }
    }
    return pix;
}

int main(){

    int n;
    cin >> n;

    int target = 0;
    cin >> target;

    vector<int> arr;

    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }


    vector<pair<int,int>> pi = twoSum(arr, target, n);

    for(auto it : pi){
        pair<int,int> px = it;
        cout << px.first << " " << px.second;
    }


    return 0;
}