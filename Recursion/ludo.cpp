#include<iostream>
using namespace std;

void fun(int n, int i, int& sum, string str){

	if( i == n -1)
	{
        cout << str << endl;
		sum++;
	}

	if(i >= n){
		return;
	}

	for(int j = 1 ; j <= 6 ; j++){
		fun(n, i+j, sum, str + to_string(j)+"->");
	}
}

int main(){

	int n;
	cin >> n;

	int sum = 0;
	fun(n, 0, sum,"");
    cout << "Number of ways :" << sum;
	return 0;
}