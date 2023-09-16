#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ll n;
	cin >> n;
	
	ll a[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	
	ll ans = (n-1) / 2; // the formula to obtain the number of value that less than two neighboring values is (n-1)/2
	ll temp = 0; 
	for (int i=1; i<n-1; i+=2){ // check for only the odd index because the cheap ice spheres are always in the odd index
		if (a[i] - a[i-1] > 0){ // the array is sorted, then if the value in the odd index is greater than the previous value, swap it
			temp = a[i];
			a[i] = a[i-1];
			a[i-1] = temp;
		}
	}
	
	cout << ans << endl;
	for (int i=0; i<n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
