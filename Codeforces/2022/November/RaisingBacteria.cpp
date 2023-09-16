#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ll x;
	cin >> x;
	
	ll ans = 0, temp = 0;
	while (x > 0){ // convert x into binary form
		temp = x % 2;
		if (temp == 1){ // count how many 1's there are in binary form
			ans++;
		}
		x /= 2;
	}
	
	cout << ans << endl;
	return 0;
}
