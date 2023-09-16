#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	
	int n;
	while (t--){
		cin >> n;
		int m = n;
		while (n >= 2020){
			n -= 2020;
		}
		if (n <= (m/2021)){
			cout << "YES" << endl;
		}else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
