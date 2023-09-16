#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	
	int n;
	for (int i=0; i<t; i++){
		cin >> n;
		for (int k=2; k<30; k++){
			int x = (1 << k) - 1;
			if (n % x == 0){
				cout << n / x << endl;
				break;
			}
		}
	}
	return 0;
}
