#include <bits/stdc++.h>

using namespace std;

void solve(){
	string x;
	cin >> x;
	
	int len = x.size(), sum = 0;
	for (int i=len-1; i>0; i--){
		sum = (x[i] - '0') + (x[i-1] - '0');
		if (sum >= 10){
			cout << x.substr(0, i-1) << sum;
			if (i + 1 < len){
				cout << x.substr(i+1);
			}
			cout << endl;
			return;
		}
	}
	
	sum = (x[0] - '0') + (x[1] - '0');
	if (len == 2){
		cout << sum << endl;
	}else {
		cout << sum << x.substr(2) << endl;
	}
}

int main(){
	int t;
	cin >> t;
	
	while (t--){
		solve();
	}
	return 0;
}
