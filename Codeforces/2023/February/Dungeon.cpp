#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
	ll a, b, c;
	cin >> a >> b >> c;
	
	// Because we deal 9 damage every 7 shots, each monster's health must be at least k and the sum must be divisible by 9. 
	ll k = (a + b + c) / 9; 
	if (a >= k && b >= k && c >= k && (a + b + c) % 9 == 0){ 
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
