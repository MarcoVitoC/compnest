#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	
	int r[n];
	for (int i=0; i<n; i++){
		cin >> r[i];
	}
	int p[n];
	p[0] = r[0];
	for (int i=1; i<n; i++){ // let p be the prefix sum of r's sequence
		p[i] = p[i-1] + r[i];
	}
	int maxP = *max_element(p, p + sizeof(p) / sizeof(p[0])); // find the maximum value of p
	int mxP = max(0, maxP); // the maximum value must be positive
	
	int m;
	cin >> m;
	
	int b[m];
	for (int i=0; i<m; i++){
		cin >> b[i];
	}
	int q[m];
	q[0] = b[0];
	for (int i=1; i<m; i++){ // let q be the prefix sum of b's sequence
		q[i] = q[i-1] + b[i];
	}
	int maxQ = *max_element(q, q + sizeof(q) / sizeof(q[0])); // find the maximum value of q
	int mxQ = max(0, maxQ); // the maximum value must be positive
	
	cout << mxP + mxQ << endl; // the maximum value of (a) sequence
}

int main(){
	int t;
	cin >> t;
	
	while (t--){
		solve();
	}
	return 0;
}
