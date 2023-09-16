#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--){
		long long int a, b;
		cin >> a >> b;
		
		if (a == b){
			cout << 0 << " " << 0 << endl;
		}else {
			long long int g = abs(a - b);
			long long int numMoves = min(a % g, g - a % g);
			cout << g << " " << numMoves << endl;
		}
	}
	return 0;
}
