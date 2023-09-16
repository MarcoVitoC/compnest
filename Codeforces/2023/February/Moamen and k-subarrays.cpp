#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
	int n, k;
	cin >> n >> k;
	
	int a[n], s[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
		s[i] = a[i];
	}
	sort(s, s + sizeof(s) / sizeof(s[0]));
	
	map<int, int> subArr;
	for (int i=0; i<n-1; i++){
		subArr[s[i]] = s[i+1];
	}
	subArr[s[n-1]] = INT_MAX;
	
	int mnK = 1;
	for (int i=0; i<n-1; i++){
		if (subArr[a[i]] != a[i+1]){
			mnK++;
		}
	}
	
	if (mnK <= k){
		cout << "Yes" << endl;
	}else {
		cout << "No" << endl;
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
