#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	
	int len = s.size();
	for (int i=0; i<len; i++){
		if (s[i] >= 'A' && s[i] <= 'Z'){
			s[i] += 32;
		}
	}
	
	string ans = "";
	for (int i=0; i<len; i++){
		if (s[i] != 'a' && s[i] != 'o' && s[i] != 'y' && s[i] != 'e' && s[i] != 'u' && s[i] != 'i'){
			ans += ".";
			ans += s[i];
		}
	}
	
	cout << ans << endl;
	return 0;
}
