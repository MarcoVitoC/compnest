#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
	ll x, y, a, b, dollars = 0;
	cin >> x >> y >> a >> b;
	
	int mx = max(x, y);
	int mn = min(x, y);
	if (a + a <= b){ // if a is cheaper than b, then
		dollars = (mx + mn) * a; // we only do an operation with a dollars
	}else { // if a is the most expensive cost, then
		dollars = mn * b + (mx - mn) * a; // calculate the min value with b dollars, and the rest value with a dollars
	}
	
	cout << dollars << endl;
}

int main(){
	int t;
	cin >> t;
	
	while (t--){
		solve();
	}
	return 0;
}
