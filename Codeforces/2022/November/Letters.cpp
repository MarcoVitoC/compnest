#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ll n, m;
	cin >> n >> m;
	
	ll a[n];
	for (int i=1; i<=n; i++){
		cin >> a[i];
	}
	
	ll b[m], sum = 0, idx = 1;
	for (int i=1; i<=m; i++){
		cin >> b[i];
		while (sum + a[idx] < b[i]){
			sum += a[idx];
			idx++;
		}
		cout << idx << " " << (b[i] - sum) << endl;
	}
	
	return 0;
}
