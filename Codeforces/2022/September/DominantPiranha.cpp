#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--) {
		int n;
		cin >> n;
		
		int p;
		vector<int> a;
		for (int i=0; i<n; i++){
			cin >> p;
			a.push_back(p);
		}
		
		int max = *max_element(a.begin(), a.end());
		int ans = -2;
		for (int i=0; i<n; i++){
			if (a[i] != max){
				continue;
			}
			if ((i > 0 && a[i-1] != max) || (i < n-1 && a[i+1] != max)){
				ans = i;
			}
		}
		cout << ans + 1 << endl;
	}
	return 0;
}
