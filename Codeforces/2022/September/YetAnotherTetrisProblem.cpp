#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--){
		int n;
		cin >> n;
		
		int a[n];
		for (int i=0; i<n; i++){
			cin >> a[i];
		}
		
		set<int> p;
		for (int i=0; i<n; i++){
			p.insert(a[i] % 2);
		}
		
		if (p.size() != 1){
			cout << "NO" << endl;
		}else {
			cout << "YES" << endl;
		}
	}
	return 0;
}
