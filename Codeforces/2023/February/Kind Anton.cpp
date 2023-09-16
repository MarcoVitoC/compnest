#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	
	int a[n], b[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	for (int i=0; i<n; i++){
		cin >> b[i];
	}
	
	bool one = false, minOne = false;
	for (int i=0; i<n; i++){
		if (a[i] < b[i] && one == false || a[i] > b[i] && minOne == false){
			cout << "NO" << endl;
			return;
		}
		
		if (a[i] == 1){ // if a[i] > b[i], then there must be element equal to 1 along elements a from index 0 to i
			one = true;
		}else if (a[i] == -1){ // if a[i] < b[i], then there must be element equal to -1 along elements a from index 0 to i
			minOne = true;
		}
	}
	cout << "YES" << endl;
}

int main(){
	int t;
	cin >> t;
	
	while (t--){
		solve();
	}
	return 0;
}
