#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ll n, q;
	cin >> n >> q;
	
	vector<ll> p;
	ll pr;
	for (int i=0; i<n; i++){
		cin >> pr;
		p.push_back(pr);
	}
	sort(p.begin(), p.end());
	
	ll s[n+1];
	s[0] = p[0];
	for (int i=1; i<n+1; i++){
		s[i] = s[i-1] + p[i-1];
	}
	
	ll x, y;
	for (int i=0; i<q; i++){
		cin >> x >> y;
		cout << s[n-x+y] - s[n-x] << endl;
	}
	return 0;
}
