#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
	ll n, k;
	cin >> n >> k;
	
	ll cf = (n+k-1) / k;
	ll sum = cf * k;
	cout << (sum+n-1) / n << endl;
}

int main(){
	int t;
	cin >> t;
	
	while (t--){
		solve();
	}
	return 0;
}
