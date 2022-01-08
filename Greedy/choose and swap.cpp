#include<bits/stdc++.h>
using namespace std;



int main(){

	string s;
	cin >> s;

	set<char> st;

	for(int i = 0 ; i < s.size() ; i++){
		st.insert(s[i]);
	}

	for(int i = 0 ; i < s.size() ; i++){

		st.erase(s[i]);

/*
		for(auto it : st){
			cout << it << " ";
		}
		cout << endl;
*/
		if(st.empty()){
			break;
		}
		
		char ch = *st.begin();

		//cout << ch << endl;
		if(ch < s[i]){
			char ch2 = s[i];
			for(int j = 0 ; j < s.size() ; j++){
				if(s[j] == ch2){
					s[j] = ch;
				}
				else{
					if(s[j] == ch){
						s[j] = ch2;
					}
				}
			}
		break;
		}
	}

	cout << s;
	return 0;
}