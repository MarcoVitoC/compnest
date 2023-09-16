#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	
	int a[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	
	for (int i=0; i<n; i++){
		for (int j=i+2; j<n; j++){
			if (a[i] == a[j]){ // find two of the same number, but they shouldn't be consecutive (1st num and 3rd num must be the same)
				cout << "YES\n";
				return;
			}
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
