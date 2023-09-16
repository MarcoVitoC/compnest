#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
	ll n, x;
	cin >> n >> x;
	
	ll a[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	
	ll suffixSum[n]; // total amount of money n until one person has 
	suffixSum[n-1] = a[n-1]; 
	for (int i=n-2; i>=0; i--){
		suffixSum[i] = suffixSum[i+1] + a[i];
	}
	
	int count = 0;
	for (int i=n-1; i>=0; i--){
		/* If the total amount of money divided by the number of people that have that money is >= the minimum amount of money to be considered wealthy,
			example:
			array = 1 1 2 5
			suffixSum = 9 8 7 5
			 - 5 is the total money from 1 person
			 - 7 is the total money from 2 person
			 - 8 is the total money from 3 person
			 - 9 is the total money from 4 person 
		*/
		if (suffixSum[i] / (n - i) >= x){ 
			count++; // then increment the possible number of wealthy people
		}
	}
	
	cout << count << endl;
}

int main(){
	int t;
	cin >> t;
	
	while (t--){
		solve();
	}
	return 0;
}
