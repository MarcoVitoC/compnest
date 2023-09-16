#include <bits/stdc++.h>

using namespace std;

bool isCommonDiff(int a, int b, int c){
	if (2*b - c > 0 && (2*b - c) % a == 0){
		return true;
	}else if (c + a > 0 && (c+a) % (2*b) == 0){
		return true;
	}else if ((2*b) - a > 0 && ((2*b) - a) % c == 0){
		return true;
	}
	
	return false;
}

int main(){
	int t;
	cin >> t;
	
	while (t--){
		long long int a, b, c;
		cin >> a >> b >> c;
		
		if (isCommonDiff(a, b, c)){
			cout << "YES" << endl;
		}else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
