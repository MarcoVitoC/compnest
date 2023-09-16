#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	
	int n = s.size();
	int a[n] = {};
	for (int i=1; i<n; i++){
		if (s[i] == s[i-1]){
			a[i] = 1;
		}
		a[i] = a[i-1] + a[i]; // prefix sum
	}
	
	int m;
	cin >> m;
	
	while (m--){
		int l, r;
		cin >> l >> r;
		
		cout << a[r-1] - a[l-1] << '\n';
	}
	return 0;
}
