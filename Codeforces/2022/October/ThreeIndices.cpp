#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	
	int p[n];
	for (int i=1; i<=n; i++){
		cin >> p[i];
	}
	
	for (int i=1; i<=n-2; i++){
		if (p[i] < p[i+1] && p[i+1] > p[i+2]){
			cout << "YES" << endl;
			cout << i << " " << i+1 << " " << i+2 << endl;
			return;
		}
	}
	cout << "NO" << endl;
}

int main(){
	int T;
	cin >> T;
	
	while (T--){
		solve();
	}
	return 0;
}
