#include <bits/stdc++.h>
#define ll long long

using namespace std;

int isPrime(int num){
	if (num <= 1){
		return 0;
	}
	
	for (int i=2; i<num; i++){
		if (num % i == 0){
			return 0;
		}
	}
	
	return 1;
}

void solve(){
	ll d;
	cin >> d;
	
	ll ans = 1; // initialize the ans to 1 because all numbers can be divided by 1
	// find 2 prime numbers after 1 to obtain the smallest positive integer (a) that has 4 divisors (1, 2 prime numbers, and the integer itself) 
	for (int i=0; i<2; i++){ 
		int p = ans + d;
		while (isPrime(p) == 0){ // check if 2 numbers after 1 is a prime number
			p++; // increment the value if it's not prime numbers
		}
		ans *= p; // multiply those 2 prime numbers to obtain (a)
	}
	
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	
	while (t--){
		solve();
	}
	return 0;
}
