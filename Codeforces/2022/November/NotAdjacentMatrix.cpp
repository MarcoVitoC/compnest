#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	
	if (n == 1){
		cout << 1 << endl;
	}else if (n == 2){
		cout << -1 << endl;
	}else {
		int size = n * n, count = 0;
		for (int i=1; i<=size; i+=2){ // first, print the odd numbers
			cout << i << " ";
			count++;
			if (count == n){
				count = 0;
				cout << endl;
			}
		}
		
		for (int i=2; i<=size; i+=2){ // then the even numbers, so that every numbers written are not adjacent
			cout << i << " ";
			count++;
			if (count == n){
				count = 0;
				cout << endl;
			}
		}
	}
}

int main(){
	int t;
	cin >> t;
	
	while (t--){
		solve();
	}
	return 0;
}
