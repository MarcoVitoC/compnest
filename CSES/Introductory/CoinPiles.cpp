#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
	ll a, b;
	cin >> a >> b;
	
	if ((a + b) % 3 == 0 && min(a, b)*2 >= max(a, b)){
		cout << "YES" << endl;
	}else {
		cout << "NO" << endl;
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
