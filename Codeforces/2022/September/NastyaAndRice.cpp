#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--){
		int n, a, b, c, d;
		cin >> n >> a >> b >> c >> d;
		
		int minEach = n * (a - b);
		int maxEach = n * (a + b);
		int minTotal = c - d;
		int maxTotal = c + d;
		
		if (minTotal > maxEach || maxTotal < minEach){ 
			cout << "NO" << endl;
		}else {
			cout << "YES" << endl;
		}
	}
	return 0;
}
