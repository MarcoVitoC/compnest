#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool linearSearch(ll num[], ll target, int len){
	for (int i=0; i<len; i++){
		if(num[i] == target){
			return true;
		}
	}
	return false;
}

void solve(){
	int n;
	cin >> n;
	
	ll a[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	
	ll num[n] = {};
	for (int i=0; i<n; i++){
		int len = sizeof(num) / sizeof(num[0]);
		while (a[i] > n || linearSearch(num, a[i], len)){
			a[i] /= 2;
			if (a[i] == 0){
				cout << "NO" << endl;
				return;
			}
		}
		num[i] = a[i];
	}

	int sum = n * (n + 1) / 2;
	ll total = 0;
	for (int i=0; i<n; i++){
		total += num[i];
	}
	
	if (total != sum){
		cout << "NO" << endl;
		return;
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
