#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	
	long long int n;
//	for (int i=0; i<t; i++){
//		cin >> n;
//		if (n & (n-1)){
//			cout << "YES" << endl;
//		}else {
//			cout << "NO" << endl;
//		}
//	}
	
	// Another solution
	for (int i=0; i<t; i++){
		cin >> n;
		if (n % 2 != 0){
			cout << "YES" << endl;
		}else {
			while (n != 0){
				n /= 2;
				if (n % 2 != 0 && n != 1){
					break;
				}
			}
			if (n % 2){
				cout << "YES" << endl;
			}else {
				cout << "NO" << endl;
			}
		}
	}
	return 0;
}
