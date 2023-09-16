#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--){
		ll n, k;
		cin >> n >> k;
		
		ll sq = pow(k, 2); // sum of the first k odd numbers is k^2
		if (sq <= n && n % 2 == k % 2){ // n and k must be equally even or odd
			cout << "YES" << endl;
		}else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
