#include <bits/stdc++.h>

using namespace std;

char cell[505][505];

int main(){
	int R, C;
	cin >> R >> C;
	
	for (int i=0; i<R; i++){
		for (int j=0; j<C; j++){
			cin >> cell[i][j];
		}
	}
	
	for (int i=0; i<R; i++){
		for (int j=0; j<C; j++){
			if (cell[i][j] == '.'){
				cell[i][j] = 'D';
			}else if (cell[i][j] == 'S' && (cell[i+1][j] == 'W' || cell[i-1][j] == 'W' || cell[i][j+1] == 'W' || cell[i][j-1] == 'W')){
				cout << "NO" << endl;
				return 0;
			}
		}
	}
	
	cout << "YES" << endl;
	for (int i=0; i<R; i++){
		for (int j=0; j<C; j++){
			cout << cell[i][j];
		}
		cout << endl;
	}
	return 0;
}
