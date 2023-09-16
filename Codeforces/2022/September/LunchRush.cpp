#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	
	int maxJoy = INT_MIN;
	while (n--){
		int f, t, res = 0;
		cin >> f >> t;
		
		if (t > k){
			res = f - (t - k);
		}else {
			res = f;
		}
		
		if (res > maxJoy){
			maxJoy = res;
		}
	}
	
	cout << maxJoy << endl;
	return 0;
}
