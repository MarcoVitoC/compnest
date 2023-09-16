#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int n;
	cin >> n;
	
	long long int x[n];
	for (int i=0; i<n; i++){
		cin >> x[i];
	}
	
	for (int i=0; i<n; i++){
		int maximum = max(abs(x[i] - x[0]), abs(x[i] - x[n-1]));
		int minimum;
		if (i == 0){
			minimum = abs(x[i] - x[i+1]);
		}else if (i > 0 && i < n-1){
			minimum = min(abs(x[i] - x[i-1]), abs(x[i] - x[i+1]));
		}else {
			minimum = abs(x[i] - x[i-1]);
		}
		
		cout << minimum << " " << maximum << endl;
	}
	return 0;
}
