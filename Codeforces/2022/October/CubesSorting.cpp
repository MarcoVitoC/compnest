#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--){
		long long int n;
		cin >> n;
		
		long long int a[n];
		for (int i=0; i<n; i++){
			cin >> a[i];
		}
		
		int isAscendingPair = 0;
		for (int i=1; i<n; i++){
			if (a[i] >= a[i-1]){ // If there is at least one ascending pair of numbers, then the array can ALWAYS be sorted.
				isAscendingPair = 1;
				break;
			}
		}
		
		if (isAscendingPair == 1){
			cout << "YES" << endl;
		}else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
