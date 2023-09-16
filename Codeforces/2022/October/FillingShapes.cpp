#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
	int n;
	cin >> n;
	
	if (n % 2 != 0){
		cout << 0 << endl;
	}else {
		int x = n / 2;
		int ans = pow(2, x);
		cout << ans << endl;
	}
}

int main(){
	solve();
	return 0;
}
