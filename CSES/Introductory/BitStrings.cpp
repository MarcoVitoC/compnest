#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ll n;
	cin >> n;
	
	ll ans = 1;
	for (int i=0; i<n; i++){
		ans *= 2;
		ans %= 1000000007;
	}
	cout << ans << endl;
	return 0;
}
