#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n, q;
	string s;
	cin >> n >> q >> s;
	
	while (q--){
		int l, r;
		cin >> l >> r;
		
		string subStr = "";
		for (int i=l-1; i<r; i++){
			subStr += s[i];
		}
		
		int len = s.size();
		int subLen = subStr.size();
		int flag = 0;
		for (int i=0; i<len; i++){
			if (subStr[0] == s[i] && i < l-1 || subStr[subLen-1] == s[i] && i > r-1){
				cout << "YES" << endl;
				flag = 1;
				break;
			}
		}
		
		if (flag == 0){
			cout << "NO" << endl;
		}
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
