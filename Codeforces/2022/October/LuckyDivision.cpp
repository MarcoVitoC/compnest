#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	
	int luckyNum[] = {4, 44, 47, 444, 447, 474, 477, 7, 74, 77, 744, 747, 774, 777};
	for (int i=0; i<14; i++){
		if (n % luckyNum[i] == 0){
			cout << "YES" << endl;
			return;
		}
	}
	cout << "NO" << endl;
}

int main(){
	solve();
	return 0;
}
