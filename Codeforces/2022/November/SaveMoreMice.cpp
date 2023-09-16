#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
	ll n, k;
	cin >> n >> k;
		
	ll x[k];
	for (int i=0; i<k; i++){
		cin >> x[i];
	}
	sort(x, x + sizeof(x) / sizeof(x[0]));
	
	int cat = 0, m = 0;
	for (int i=k-1; cat<x[i] && i>=0; i--){
		m++;
		cat += (n - x[i]);
	}
	
	cout << m << endl;
}

int main(){
	int t;
	cin >> t;
	
	while (t--){
		solve();
	}
	return 0;
}
