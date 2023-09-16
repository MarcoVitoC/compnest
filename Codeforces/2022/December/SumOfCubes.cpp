#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
	ll x;
	cin >> x;
	
	map<ll, ll> cubes;
	for (ll i=1; i<=10001; i++){
		cubes[i*i*i] = 1;
	}
	
	for (ll i=1; i*i*i<x; i++){
		ll num = x - i*i*i;
		if (cubes[num] == 1){
			cout << "YES\n";
			return;
		}
	}
	
	cout << "NO\n";
}

int main(){
	int t;
	cin >> t;
	
	while (t--){
		solve();
	}
	
	return 0;
}
