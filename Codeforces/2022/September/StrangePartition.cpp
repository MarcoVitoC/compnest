#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--){
		long long int n, x;
		cin >> n >> x;
		
		long long int a, total = 0, max = 0; // (Maximum) divide each number with x. Increment it when it can't be divided by x. Then get the sum of those values
		for (int i=0; i<n; i++){
			cin >> a;
			total += a;
			max += (a / x);
			if (a % x != 0){
				max++;
			}
		}
		
		long long int min = total / x; // (Minimum) find the sum of all numbers, then divide it by x. Increment it when it can't be divided by x.
		if (total % x != 0){
			min++;
		}
		
		cout << min << " " << max << endl;
	}
	return 0;
}
