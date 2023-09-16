#include <bits/stdc++.h>
#define ll long long 

using namespace std;

void solve(){
	int n;
	cin >> n;
	
	ll a[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	
	char player = 'F';
	for (int i=0; i<n-1 && a[i]==1; i++){
		player = (player == 'F') ? 'S' : 'F';
	}
	
	cout << ((player == 'F') ? "First" : "Second") << endl;
}

int main(){
	int t;
	cin >> t;
	
	while (t--){
		solve();
	}
	return 0;
}
