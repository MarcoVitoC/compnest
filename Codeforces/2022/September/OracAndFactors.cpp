#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--){
		long long int n, k;
		cin >> n >> k;
		
		if (n % 2 == 0){
			cout << n + (2 * k) << endl;
		}else {
			int minDiff = 0;
			for (int i=n; i>=2; i--){
				if (n % i == 0){
					minDiff = i;
				}
			}
			cout << n + minDiff + 2 * (k - 1) << endl;
		}
	}
	return 0;
}
