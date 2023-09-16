#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n, k;
	string s;
	cin >> n >> k >> s;
	
	int c[n+1];
	c[0] = 0;
	for (int i=1; i<=n; i++){ // find the number of white cells with prefix sum
		c[i] = c[i-1] + int(s[i-1] == 'W');
	}
	
	int ans = k;
	for (int i=k; i<=n; i++){
		ans = min(ans, c[i] - c[i-k]); // count the number of 'W' from every segment of k 
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
