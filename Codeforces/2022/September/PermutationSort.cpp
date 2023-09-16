#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--){
		int n;
		cin >> n;
		
		int a[n];
		for (int i=0; i<n; i++){
			cin >> a[i];
		}
		
		int flag = 0;
		for (int i=0; i<n-1; i++){
			if (a[i] > a[i+1]){
				flag = 1;
				break;
			}
		}
		
		if (flag == 0){ // if the array is sorted
			cout << 0 << endl;
		}else if (a[0] == 1 || a[n-1] == n){ // If the first or last values are in the correct position
			cout << 1 << endl;
		}else if (a[0] == n && a[n-1] == 1){ // if the first and last values are in the reverse position
			cout << 3 << endl;
		}else {
			cout << 2 << endl;
		}
	}
	return 0;
}
