#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, b, d;
	cin >> n >> b >> d;
	
	int a[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	
	int waste = 0, count = 0;
	for (int i=0; i<n; i++){
		if (a[i] > b){
			continue;
		}
		waste += a[i];
		if (waste > d){
			count++;
			waste = 0;
		}
	}
	
	cout << count << endl;
	return 0;
}
