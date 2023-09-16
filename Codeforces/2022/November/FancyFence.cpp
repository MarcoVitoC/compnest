#include <bits/stdc++.h>

using namespace std;

void solve(){
	int a;
	cin >> a;
		
	if (360 % (180 - a) == 0){
		cout << "YES" << endl;
		return;
	}
	cout << "NO" << endl;
}

int main(){
	int t;
	cin >> t;
	
	while (t--){
		solve();
	}
	return 0;
}
