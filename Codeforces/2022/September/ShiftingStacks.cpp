#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--){
		int n;
		cin >> n;
		
		int h[n];
		for (int i=0; i<n; i++){
			cin >> h[i];
		}
		
		long long int expected = 0, sum = 0, flag = 0;
		for (int i=0; i<n; i++){
			expected += i; // the minimum sum of blocks to make an ascending prefix
			sum += h[i]; // sum of blocks
			if (sum < expected){ // if the sum is less than the minimum sum, it can't make an ascending prefix
				flag = 1;
				break;
			}
		}
		
		if (flag == 1){
			cout << "NO" << endl;
		}else {
			cout << "YES" << endl;
		}
	}
	return 0;
}
