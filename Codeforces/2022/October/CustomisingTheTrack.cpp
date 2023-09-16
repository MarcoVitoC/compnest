#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--){
		ll n;
		cin >> n;
		
		ll a[n], sum = 0;
		for (int i=0; i<n; i++){
			cin >> a[i];
			sum += a[i];
		}
		
		ll x = sum % n;
		cout << x * (n - x) << endl;
	}
	return 0;
}
