#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
	ll n;
	cin >> n;
	
	ll ans = 0;
	for (ll i=1; i<=(n-1)/2; i++){
		ans += (i*i);
	}
	cout << ans * 8 << endl;
}

int main(){
	int t;
	cin >> t;
	
	while (t--){
		solve();
	}
	return 0;
}
