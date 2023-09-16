#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	
	int a[n+1], skill[n+1] = {};
	for (int i=1; i<=n; i++){
		cin >> a[i];
		skill[a[i]]++; // count the number of student with the skill i
	}
	
	int diff = 0;
	for (int i=1; i<=n; i++){
		if (skill[i] > 0){ // count the number of different skills
			diff++;
		}
	}
	
	int mx = -1;
	for (int i=1; i<=n; i++){
		mx = max(mx, skill[i]); // the size of the second team can't exceed the maximum number of students with the same skills in the array
	}
	
	cout << max(min(diff-1, mx), min(diff, mx-1)) << endl;
}

int main(){
	int t;
	cin >> t;
	
	while (t--){
		solve();
	}
	return 0;
}
