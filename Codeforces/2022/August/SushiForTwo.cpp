#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int t[n+1];
	for (int i=0; i<n; i++){
		cin >> t[i];
	}
	
	int ans = 0, curr = 0, last = 0;
	for (int i=0; i<n; i++){
		if (i == 0 || t[i] != t[i-1]){
			last = curr;
			curr = 1;
		}else {
			curr++;
		}
		
		int min = (last < curr) ? last : curr;
		int max = (ans > min) ? ans : min;
		ans = max;
	}
	
	cout << ans * 2 << endl;
	return 0;
}
