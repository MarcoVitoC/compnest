#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	
	int a[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	
	int w = 0; 
	for (int i=0; i<n-1; i++){ // check if the number of walks in 2 consecutive days is at least k for n days
		// if k - the number of walks in 2 consecutive days is >= 0, it means that polycarp and cormen haven't walked for at least k times
		if (k - a[i+1] - a[i] >= 0){ 
			w += (k - a[i+1] - a[i]); // add the number of walks that polycarp should do
			// between 2 consecutive days, change the second day to k - the number of walks in the first day so that they can walk for at least k times
			a[i+1] = k - a[i]; 
		}
	}
	
	cout << w << endl;
	for (int i=0; i<n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
