#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ll n, m;
	cin >> n >> m;
	
	int a[m+2];
	for (int i=1; i<=m; i++){
		cin >> a[i];
	}
	
	ll time = 0;
	for (int i=1; i<=m; i++){
		if (i == 1){
			time += (a[i] - 1);
		}else {
			if (a[i] < a[i-1]){
				time += (n - a[i-1] + a[i]);
			}else {
				time += (a[i] - a[i-1]);
			}
		}
	}
	cout << time << endl;
	return 0;
}
