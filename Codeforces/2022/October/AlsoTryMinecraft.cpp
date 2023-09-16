#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ll n, m;
	cin >> n >> m;
	
	ll a[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	
	vector<ll> r, l;
	ll zero = 0;
	
	// Initialize 0 as the first value of prefix sum
	r.push_back(0);
	l.push_back(0);
	
	// Count the fall damage
	for (int i=0; i<n-1; i++){ // from left to right
		l.push_back(max(zero, a[i] - a[i+1]));
	}
	for (int i=1; i<n; i++){ // from right to left
		r.push_back(max(zero, a[i] - a[i-1]));
	}

	// Prefix sum
	for (int i=1; i<n; i++){
		l[i] += l[i-1];
		r[i] += r[i-1];
	}
	
	while (m--){
		ll s, t;
		cin >> s >> t;
		
		if (s < t){
			cout << l[t-1] - l[s-1] << endl;
		}else {
			cout << r[s-1] - r[t-1] << endl;
		}
	}
	return 0;
}
