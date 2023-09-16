#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	
	int a[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	
	int evenNum = 0, oddNum = 0;
	for (int i=0; i<n; i++){
		if (a[i] % 2 == 0){
			evenNum++; // count the number of even numbers in the array
		}else {
			oddNum++; // count the number of odd numbers in the array
		}
	}
	
	if (evenNum % 2 == 0 && oddNum % 2 == 0){ // if the number of even and odd numbers are even, then all numbers can be combined into pairs of equal parity
		cout << "YES" << endl;
	}else if (evenNum % 2 != 0 && oddNum % 2 != 0){ // if the number of even and odd numbers are odd, then
		for (int i=0; i<n-1; i++){ 
			for (int j=i+1; j<n; j++){
				if (abs(a[i] - a[j]) == 1){ // check if there are two numbers such that the difference is 1
					cout << "YES" << endl;
					return;
				}
			}
		}
		cout << "NO" << endl; 
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
