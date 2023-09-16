#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int a[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	
	int length = sizeof(a) / sizeof(a[0]);
	sort(a, a + length);
	for (int i=0; i<n; i++){
		cout << a[i];
		if (i < n - 1){
			cout << " ";
		}
		if (i == n - 1){
			cout << endl;
		}
	}
	return 0;
}
