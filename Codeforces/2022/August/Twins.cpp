#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int coins[n];
	for (int i=0; i<n; i++){
		cin >> coins[i];
	}
	
	int length = sizeof(coins) / sizeof(coins[0]);
	sort(coins, coins + length, greater<int>());
	
	int countRest = 0;
	for (int i=1; i<n; i++){
		countRest += coins[i];
	}
	
	int countSum = 0, ownCoins = 0;
	if (n == 1){
		cout << 1 << endl;
		return 0;
	}else {
		for (int i=0; i<n; i++){
			if (i == 0){
				countSum += coins[i];
				ownCoins++;
			}else {
				if (countSum > countRest){
					break;
				}else {
					countRest -= coins[i];
					countSum += coins[i];
					ownCoins++;
				}
			}
		}
	}
	
	cout << ownCoins << endl;
	return 0;
}
