#include <bits/stdc++.h>

using namespace std;

int main(){
	string s, t;
	cin >> s >> t;
	
	int len = s.size(), i = 0;
	while (len--){
		if (t[len] == s[i]){
			i++;
		}else {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	
	return 0;
}
