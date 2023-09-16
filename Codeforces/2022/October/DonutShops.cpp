#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
	ll a, b, c, x;
	cin >> a >> b >> c;
	
	if (1 * a >= c){ // if 1 donut in the  first price is cheaper than a box of donut in the second shop 
		x = -1; // then the first shop's price will never be cheaper than the second shop's
	}else {
		x = 1; // otherwise, we can buy 1 or more donuts in the first shop so that the price will be the cheapest
	}
	cout << x << " ";
	
	if (c < a * b){ // if one box is cheaper than b donuts in the first shop, then
		x = b; // buy b donuts in the second shop will be the cheapest price
	}else {
		x = -1; // otherwise, the second shop's price will never be cheaper than the first shop's
	}
	cout << x << endl;
}

int main(){
	int t;
	cin >> t;
	
	while (t--){
		solve();
	}
	return 0;
}
