#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n, m, x, y;
	cin >> n >> m >> x >> y;
	
	char sq[n+1][m+1];
	for (int i=1; i<=n; i++){
		for (int j=1; j<=m; j++){
			cin >> sq[i][j];
		}
	}
	
	int p = 0;
	if (x + x < y){ // if x is the cheapest price, then we should cover all the white squares with 1x1 tiles and never use 1x2 tiles
		for (int i=1; i<=n; i++){
			for (int j=1; j<=m; j++){
				if (sq[i][j] == '.'){
					p += x;
				}
			}
		}
	}else { // Otherwise, we have to cover all squares with 1x2 tiles as many times as possible and cover the rest with 1x1 tiles
		for (int i=1; i<=n; i++){
			for (int j=1; j<=m; j++){
				if (sq[i][j] == '.'){
					if (m > 1 && j<m && sq[i][j+1] == '.'){ // check if there are 1x2 tiles
						p += y; 
						j++; // because it's 1x2 tiles, we can skip checking sq[i][j+1] or the adjacent tiles
					}else {
						p += x;
					}
				}
			}
		}
	}
	cout << p << endl;
}

int main(){
	int t;
	cin >> t;
	
	while (t--){
		solve();
	}
	return 0;
}
