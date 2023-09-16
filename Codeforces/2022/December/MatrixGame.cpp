#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n, m;
	cin >> n >> m;
	
	int a[n][m];
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			cin >> a[i][j];
		}
	}
	
	int x = 0;
	for (int i=0; i<n; i++){
		int countZeroRow = 0;
		for (int j=0; j<m; j++){
			if (a[i][j] == 0){
				countZeroRow++;
			}
		}
		if (countZeroRow == m){
			x++;
		}
	}
	
	int y = 0;
	for (int i=0; i<m; i++){
		int countZeroCol = 0;
		for (int j=0; j<n; j++){
			if (a[j][i] == 0){
				countZeroCol++;
			}
		}
		if (countZeroCol == n){
			y++;
		}
	}
	
	if (min(x, y) % 2 != 0){
		cout << "Ashish" << endl;
	}else {
		cout << "Vivek" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	
	while (t--){
		solve();
	}
	return 0;
}
