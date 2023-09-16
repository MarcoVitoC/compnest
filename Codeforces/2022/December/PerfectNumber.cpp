#include <bits/stdc++.h>

using namespace std;

int main(){
	int k;
	cin >> k;
	
	int idx = 0, ans = 0;
	for (int i=19; idx!=k; i++){
		int sum = 0, temp = i;
		while (temp != 0){
			sum += (temp % 10);
			temp /= 10;
		}
		if (sum == 10){
			ans = i;
			idx++;
		}
	}
	cout << ans << endl;
	return 0;
}
