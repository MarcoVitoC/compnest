#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n, a, b;
	string s;
	cin >> n >> a >> b >> s;
	
	int ans = n * a; // initialized to n * a because the sum of each substring's length is equal to n
	int count = 0;
	for (int i=1; i<n; i++){ // count the number of substring
		if (s[i] != s[i-1]){
			count++;
		}
	}
	count++;
	// get the maximum value between the numbers when the characters are deleted one by one or by the numbers of substring
	cout << ans + max(n * b, (count/2 + 1) * b) << endl; // then add it to ans
}

int main(){
	int t;
	cin >> t;
	
	while (t--){
		solve();
	}
	return 0;
}
