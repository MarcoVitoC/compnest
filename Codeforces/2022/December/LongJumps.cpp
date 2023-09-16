#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
	int n;
	cin >> n;
	
	ll a[n+1];
	for (int i=1; i<=n; i++){
		cin >> a[i];
	}
	
	ll score[n+1] = {};
	for (int i=n; i>=1; i--){ // use dynamic programming
		if (i + a[i] > n){
			score[i] = a[i];
		}else {
			score[i] = a[i] + score[i + a[i]];
		}
	}
	
	ll ans = 0;
	for (int i=1; i<=n; i++){
		ans = max(ans, score[i]); // find the maximum score
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
