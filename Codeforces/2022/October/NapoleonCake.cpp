#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	
	int a[n], layer[n] = {0};
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	
	int maxCream = a[n-1]; // keep track the number of poured cream
	for (int i=n-1; i>=0; i--){
		if (a[i] != 0 || maxCream != 0){ // all possible layers must get drenched by the total poured cream
			layer[i] = 1; // the cream is poured onto the layer and mark the drenched layer
			maxCream = max(maxCream, a[i]); // If the cream still remains, keep using the current amount of cream until it's empty.
			maxCream--; // reduce the number of poured cream 
		}else {
			maxCream = 0; // if there is no cream to pour and the poured cream is empty, then no layer gets drenched
		}
	}
	
	for (int i=0; i<n; i++){
		cout << layer[i] << " ";
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	
	while (t--){
		solve();
	}
	return 0;
}
