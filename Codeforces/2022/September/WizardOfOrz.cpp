#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--){
		int n;
		cin >> n;
		
		string num = "989";
		if (n <= 3){
			cout << num.substr(0, n) << endl;
			continue;
		}
		
		cout << num;
		for (int i=3; i<n; i++){
			cout << (i - 3) % 10;
		}
		cout << endl;
	}
	return 0;
}
