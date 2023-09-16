#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	
	int a[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	
	int ans = 0, minPrice = INT_MAX;
	for (int i=n-1; i>=0; i--){
		if (a[i] > minPrice){
			ans++;
		}
		minPrice = min(minPrice, a[i]);
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
