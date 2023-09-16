#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	
	int bills[n];
	for (int i=0; i<n; i++){
		cin >> bills[i];
	}
	
	int money1 = 0, money2 = 0;
	for (int i=0; i<n; i++){
		if (bills[i] == 25){
			money1++; // the customer doesn't need change, so the ticket office will get money
		}else if (bills[i] == 50){
			money2++; // the ticket office will get customer's money
			if (money1 > 0){
				money1--; // the ticket office should give the customer 25 rubles back
			}else {
				cout << "NO\n";
				return;
			}
		}else {
			if (money1 > 0 && money2 > 0){ // keep track of the number of 25 and 50 rubles bills and try 25 + 50 first
				money1--;
				money2--;
			}else if (money1 >= 3){ // otherwise, try 25 + 25 + 25
				money1 -= 3;
			}else {
				cout << "NO\n";
				return;
			}
		}
	}
	cout << "YES\n";
}

int main(){
	solve();
	return 0;
}
