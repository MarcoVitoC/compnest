#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	
	string ans = "hello";
	int idx = 4, len = s.size();
	for (int i=len-1; i>=0; i--){
		if (s[i] == ans[idx]){ // find the character from backward
			idx--; // if found, reduce the index to find the next character
		}
		if (idx == -1){ // If all characters are found, then the idx will always be -1 and break the loop.
			break;
		}
	}
	
	if (idx == -1){ // if all characters are found
		cout << "YES" << endl;
	}else {
		cout << "NO" << endl;
	}
	return 0;
}
