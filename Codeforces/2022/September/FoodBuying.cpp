#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--){
		long long int s;
		cin >> s;
		
		long long int res = 0;
		if (s < 10){
			cout << s << endl;
		}else {
			while (s >= 10){
				int x = s / 10;
				res += x * 10;
				s -= (x * 9);
			}
			res += s;
			cout << res << endl;
		}
	}
	return 0;
}
