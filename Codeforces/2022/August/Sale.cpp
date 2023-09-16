#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	
	int a[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	
	int length = sizeof(a) / sizeof(a[0]);
	sort(a, a + length);
	
	int sum = 0;
	for (int i=0; a[i]<=0 && i<m; i++){
		sum += a[i];
	}
	cout << abs(sum) << endl;
	return 0;
}
