#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
	ll n;
	cin >> n;
	
	ll a[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	
	int len = sizeof(a) / sizeof(a[0]);
	sort(a, a + len);
	
	for (int i=0; i<n-2; i++){
		int x = a[i];
		int y = a[i+1];
		int z = a[i+2];
		if (x + y > z && x + z > y && y + z > x){
			cout << "YES" << endl;
			return;
		}
	}
	
	cout << "NO" << endl;
}

int main(){
	solve();
	return 0;
}
