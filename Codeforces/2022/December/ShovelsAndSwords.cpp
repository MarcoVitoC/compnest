#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--){
		ll a, b;
		cin >> a >> b;
	
		cout << min(min(a, b), (a + b) / 3) << endl;
	}
	
	return 0;
}
