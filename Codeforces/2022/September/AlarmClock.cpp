#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--){
		long long int a, b, c, d;
		cin >> a >> b >> c >> d;
		
		if (b >= a){
			cout << b << endl;
		}else if (d >= c){
			cout << -1 << endl;
		}else {
			int repeat = (a - b) / (c - d);
			if ((a - b) % (c - d) != 0){
				repeat++;
			}
			cout << b + (repeat * c) << endl;
		}
	}
	return 0;
}
