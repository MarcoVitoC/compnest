#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	
	int soldPuzzles[m];
	for (int i=0; i<m; i++){
		cin >> soldPuzzles[i];
	}
	
	int length = sizeof(soldPuzzles) / sizeof(soldPuzzles[0]);
	sort(soldPuzzles, soldPuzzles + length);
	
	int min = INT_MAX;
	for (int i=0; i<=m-n; i++){
		if (soldPuzzles[i+n-1] - soldPuzzles[i] < min){ // subtract the largest and smallest from the first n number
			min = soldPuzzles[i+n-1] - soldPuzzles[i];
		}
	}
	cout << min << endl;
	
	return 0;
}
