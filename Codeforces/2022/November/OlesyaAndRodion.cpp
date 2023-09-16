#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	int n, t;
	cin >> n >> t;
	
	if (n == 1 && t >= 10){
		cout << -1 << endl;
		return 0;
	}else if (n == 1 && t < 10){
		cout << t << endl;
		return 0;
	}
	
	string ans = "";
	if (t < 10){
		if (t % 2 == 0 && t != 6){
			ans += "8";
		}else if (t % 2 == 0 && t == 6){
			ans += "6";
		}else if (t % 2 != 0 && t != 7){
			ans += "9";
		}else {
			ans += "7";
		}
	}else {
		ans += "1";
	}
	
	for (int i=0; i<n-1; i++){
		ans += '0';
	}
	cout << ans << endl;
	return 0;
}
