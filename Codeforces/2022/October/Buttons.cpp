#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int ans = 0;
	for (int i=1; i<=n-1; i++){ // to obtain the total number of presses, she needs to guess the correct sequence
		ans += (n - i) * i; // the number of mistakes she made multiplied by the number of correct presses before she pressed the wrong button
	}
	
	cout << ans + n << endl; // after the correct sequence is guessed, she needs to press all the correct buttons at once to open the lock
	return 0;
}
