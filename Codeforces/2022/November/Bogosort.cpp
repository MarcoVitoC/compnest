#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
	int n;
	cin >> n;
	
	int a[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a, a + sizeof(a) / sizeof(a[0]), greater<int>());
	
	if (n == 1){
		cout << a[0] << endl;
	}else {
		for (int i=0; i<n-1; i++){
			for (int j=i+1; j<n; j++){
				if (i + 1 - a[i] == j + 1 - a[j]){
					int temp = a[j];
					a[j] = a[j-1];
					a[j-1] = temp;
				}
			}
		}
		
		for (int i=0; i<n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
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
