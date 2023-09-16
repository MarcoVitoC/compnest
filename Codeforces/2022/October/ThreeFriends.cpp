#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
	ll a, b, c;
	cin >> a >> b >> c;
	
	int na[] = {a-1, a, a+1};
	int nb[] = {b-1, b, b+1};
	int nc[] = {c-1, c, c+1};
	
	ll ans = INT_MAX;
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			for (int k=0; k<3; k++){
				ll res = abs(na[i] - nb[j]) + abs(na[i] - nc[k]) + abs(nb[j] - nc[k]);
				if (res < ans){
					ans = res;
				}
			}
		}
	}
	
	cout << ans << endl;
}

int main(){
	int q;
	cin >> q;
	
	while (q--){
		solve();
	}
	return 0;
}

