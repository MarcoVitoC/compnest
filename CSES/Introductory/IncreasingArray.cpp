#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ll n;
	cin >> n;
	
	ll x[n];
	for (int i=0; i<n; i++){
		cin >> x[i];
	}
	
	ll count = 0;
	for (int i=1; i<n; i++){
		while (x[i] < x[i-1]){
			x[i]++;
			count++;
		}
	}
	
	cout << count << endl;
	return 0;
}
