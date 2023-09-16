#include <bits/stdc++.h>

using namespace std;

int main(){
	char shift;
	cin >> shift;
	
	string s;
	cin >> s;
	
	map<char, char> leftShift;
	map<char, char> rightShift;
	
	string str = "qwertyuiop[";
	for (int i=1; i<str.size(); i++){
		leftShift[str[i]] = str[i-1];
	}
	for (int i=0; i<str.size()-1; i++){
		rightShift[str[i]] = str[i+1];
	}
	
	str = "asdfghjkl;";
	for (int i=1; i<str.size(); i++){
		leftShift[str[i]] = str[i-1];
	}
	for (int i=0; i<str.size()-1; i++){
		rightShift[str[i]] = str[i+1];
	}
	
	str = "zxcvbnm,./";
	for (int i=1; i<str.size(); i++){
		leftShift[str[i]] = str[i-1];
	}
	for (int i=0; i<str.size()-1; i++){
		rightShift[str[i]] = str[i+1];
	}
	
	if (shift == 'R'){
		for (int i=0; i<s.size(); i++){
			cout << leftShift[s[i]];
		}
		cout << endl;
	}else {
		for (int i=0; i<s.size(); i++){
			cout << rightShift[s[i]];
		}
		cout << endl;
	}
	return 0;
}
