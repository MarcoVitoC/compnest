#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--){
		ll a, b, x, y, n;
		cin >> a >> b >> x >> y >> n;
		
		ll ans = 1e18;
		for (int i=0; i<2; i++){ // loop 2 times because we decrease a then b and vice versa
			ll da = min(n, a - x); // decrease a first then b
			ll db = min(n - da, b - y); 
			ans = min(ans, (a - da) * (b - db)); 
			swap(a, b); // swap the value of a and b, decrase b first then a
			swap(x, y); // swap the value of x and y
		}
		
		cout << ans << '\n';
	}
	
	return 0;
}
