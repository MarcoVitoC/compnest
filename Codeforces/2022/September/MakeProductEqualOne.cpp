#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int a[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	
	long long int ans = 0; 
	for (int i=0; i<n; i++){
		long long int coins = 0; // count needed coins to increase or decrease the num (the coins value is reset in every iteration)
		if (a[i] > 1){ // decrease num to 1 if (num > 1 (positive))
			coins = a[i] - 1; 
			a[i] -= coins; // subtract num with needed coins so that it become 1
		}else if (a[i] < -1){ // increase num to -1 if (num < -1 (negative))
			coins = abs(a[i]) - 1;
			a[i] += coins; // add num with needed coins so that it become -1
		}
		ans += coins; // sum all of the needed coins in every iteration
	}

	int countZero = 0, countMin = 0; // count -1 and 0 value
	for (int i=0; i<n; i++){
		if (a[i] == -1){
			countMin++;
		}else if (a[i] == 0){
			countZero++;
		}
	}
	
	if (countZero > 0){ // if 0 value > 0, then add ans with the total of 0 value
		ans += countZero;
	}else if (countMin % 2 != 0){ // if there is no 0 value, then
		/* if -1 value is odd, add ans with 2 because if the -1 value > 1, ((total of -1 value) - 1) will always be positive when multiplied.
		   That's why, we only need to change the last -1 value to 1 that cost 2 coins. */
		ans += 2;
	}
	
	cout << ans << endl;
	return 0;
}
