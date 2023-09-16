#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	
	vector<int> num;
	for (int i=0; i<n; i++){
		num.push_back(i+1);
	}
	
	cout << 2 << endl;
	for (int i=num.size()-1; i>=1; i--){
		int a = num[i], b = num[i-1];
		cout << a << " " << b << endl;
		int newNum = ((a+b) / 2) + ((a+b) % 2 != 0);
		num.pop_back();
		num.pop_back();
		num.push_back(newNum);
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
