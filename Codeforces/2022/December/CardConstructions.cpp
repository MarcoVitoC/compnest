#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--){
		ll n;
		cin >> n;
		
		if (n <= 1){
			cout << 0 << '\n';
		}else {
			vector<ll> pyramid; // count the used cards for each pyramid's height
			pyramid.push_back(2);
			for (ll i=2; i<n/2; i++){
				if (pyramid[i-2] >= n){
					break;
				}
				pyramid.push_back(((i*2) + (i-1)) + pyramid[i-2]);
			}
			
			int ans = 0;
			for (int i=pyramid.size()-1; i>=0 && n>=2; i--){ // use the used cards in descending order (from the largest)
				while (n - pyramid[i] >= 0){ // as long as the used cards can subtract the number of cards, subtract it
					n -= pyramid[i];
					ans++; // count the number of pyramids we can construct
				}
			}
			cout << ans << '\n';
		}
	}
	return 0;
}
