#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int sumX = 0, sumY = 0, sumZ = 0;
	while (n--){
		int x, y, z;
		cin >> x >> y >> z;
		
		sumX += x;
		sumY += y;
		sumZ += z;
	}
	
	if (sumX == 0 && sumY == 0 && sumZ == 0){
		cout << "YES" << endl;
	}else {
		cout << "NO" << endl;
	}
	return 0;
}
