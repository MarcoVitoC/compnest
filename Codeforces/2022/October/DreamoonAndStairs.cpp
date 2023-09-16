#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	
	if (n < m){ 
		cout << -1 << endl;
	}else if (n == m){ 
		cout << m << endl;
	}else {
		int minMoves = (n % m == 0) ? n / 2 : (n/2) + 1; // because ceil function is doesn't work, plus minMoves by 1 if n can't be divided by m
		for (int i=minMoves; i<=n; i++){ // loop from minimum moves (minMoves) to maximum moves (n)
			if (i % m == 0){ // if the value can be divided by m, then print the value and break the loop
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}
