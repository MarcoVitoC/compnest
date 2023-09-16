#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	
	int p = n / 4 + (n % 4 != 0); // minimum number of 8 digits that must consist in the answer (rounded-up)
	string ans; // in order to obtain the maximum r, the answer must consists of digits 8 and 9
	for (int i=0; i<n-p; i++){
		ans += '9';
	}
	for (int i=0; i<p; i++){
		ans += '8';
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
