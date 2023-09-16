#include <bits/stdc++.h>
#define ll long long 

using namespace std;

void solve(){
	ll n;
	cin >> n;
	
	ll a[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a, a + sizeof(a) / sizeof(a[0]));
	
	if (n == 1){
		cout << a[0] << endl;
	}else {
		ll ans = a[0];
		for (int i=1; i<n; i++){
			ans = max(ans, a[i] - a[i-1]);
		}
		cout << ans << endl;
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
