#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	
	int h[n];
	for (int i=0; i<n; i++){
		cin >> h[i];
	}
	
	int sum = 0;
	for (int i=0; i<k; i++){ // calculate the sum of first k consecutive planks
		sum += h[i];
	}
	
	int min = sum; // temporarily, initialize the sum of the first k planks as the minimum sum
	int i = 0, j = k, ans = 0;
	while (j < n){
		sum = sum - h[i] + h[j]; // subtract h[0] and add h[k] to get the sum of k planks starting from the second plank, and so on
		i++, j++;
		if (sum < min){ // if the sum is smaller than the temporary minimum sum, 
			min = sum; // then update the temporary minimum sum
			ans = i; // and save the index
		}
	}
	cout << ans + 1 << endl;
	
	return 0;
}
