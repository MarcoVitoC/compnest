#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	
	int a[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	
	int len = sizeof(a) / sizeof(a[0]);
	sort(a, a+len);
	
	if (a[n-1] <= n){
		cout << n + 1 << endl;
	}else {
		int ans = n + 1;
		for (int i=n-1; i>=0; i--){
			if (a[i] > ans-1){ 
				ans--;
			}else {
				break;
			}
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
