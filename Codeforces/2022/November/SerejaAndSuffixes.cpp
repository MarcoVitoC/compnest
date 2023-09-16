#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	
	int a[n+1];
	for (int i=1; i<=n; i++){
		cin >> a[i];
	}
	
	int ans[n+1] = {}, b[100001] = {};
	ans[n] = 1; 
	b[a[n]]++; // to indicate that the a[i] element has been met 
	for (int i=n-1; i>=1; i--){
		if (b[a[i]] == 0){ // if the a[i] element hasn't yet met, 
			ans[i] = ans[i+1] + 1; // initialize ans[i] value with ans[i+1] + 1 to count the number of distinct numbers from that index
			b[a[i]]++; // mark the value's index to indicate that the a[i] element has been met 
		}else { 
			ans[i] = ans[i+1]; // otherwise, the value will still be the same
		}
	}
	
	for (int i=1; i<=m; i++){
		int l;
		cin >> l;
		
		cout << ans[l] << endl;
	}
	
	return 0;
}
