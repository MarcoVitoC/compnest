#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	
	int a[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	
	if (n == 1){
		cout << 0 << endl;
	}else {
		int count = 0;
		for (int i=n-2; i>=0; i--){ // start at the second index from the last
			if (a[i+1] == 0){ // its impossible to be increasing sequence if 0 isn't at the first index
				cout << -1 << endl;
				return;
			}
			while (a[i] >= a[i+1]){ // divide the value until its less than the next value to obtain the desired sequence
				a[i] /= 2;
				count++;
			}
		}
		cout << count << endl;
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
