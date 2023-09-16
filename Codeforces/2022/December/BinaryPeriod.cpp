#include <bits/stdc++.h>

using namespace std;

void solve(){
	string t;
	cin >> t;
	
	int one = 0, zero = 0;
	for (int i=0; i<t.size(); i++){
		if (t[i] == '1'){
			one++;
		}else {
			zero++;
		}
	}
	
	string ans = "";
	if ((one == 0 && zero > 0) || (one > 0 && zero == 0)){
		cout << t << endl;
	}else {
		if (t[0] == '0'){
			for (int i=0; i<t.size()*2; i++){
				if (i % 2 == 0){
					ans += "0";
				}else {
					ans += "1";
				}
			}
		}else {
			for (int i=0; i<t.size()*2; i++){
				if (i % 2 == 0){
					ans += "1";
				}else {
					ans += "0";
				}
			}
		}
	}
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	
	while (t--){
		solve();
	}
	return 0;
}
