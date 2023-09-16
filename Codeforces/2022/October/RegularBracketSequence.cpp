#include <bits/stdc++.h>

using namespace std;

void solve(){
	string s;
	cin >> s;
	
	int len = s.size();
	if (s[0] == ')' || s[len-1] == '(' || len % 2 != 0){
		cout << "NO" << endl;
	}else {
		cout << "YES" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	
	while (t--){
		solve();
	}
	return 0;
}
