#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ll n;
	cin >> n;
	
	for (ll i=1; i<=n; i++){
		ll a = i*i*(i*i - 1) / 2;
		ll b = 4*(i-1)*(i-2);
		cout << a - b << endl;
	}
	return 0;
}
