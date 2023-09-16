#include <bits/stdc++.h>
#define ll long long

using namespace std;

int countOne(ll res, int k){
	int count = 0;
	while (res > 0 && count <= k){
		if (res % 2 == 1){
			count++;
		}
		res /= 2;
	}
	return count;
}

int main(){
	int n, m, k;
	cin >> n >> m >> k;
	
	ll x[m+1];
	for (int i=0; i<=m; i++){
		cin >> x[i];
	}
	
	ll ans = 0, res = 0;
	for (int i=0; i<m; i++){
		res = x[i] ^ x[m]; // use xor operation to get the number of different bits between 2 numbers
		if (countOne(res, k) <= k){ // count the number of 1 bit
			ans++;
		}
	}
	
	cout << ans << endl;
	return 0;
}
