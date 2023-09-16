#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int a[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	
	int max = 0, min = a[0], maxIdx = 0, minIdx = 0;
	for (int i=0; i<n; i++){
		if (a[i] > max){
			max = a[i];
			maxIdx = i;
		}
		if (i < n-1){
			if (a[i+1] <= min){
				min = a[i+1];
				minIdx = i+1;
			}
		}
	}
	
	if (maxIdx < minIdx){
		cout << (maxIdx - 1) + (n - minIdx) << endl;
	}else {
		cout << ((maxIdx - 1) + (n - minIdx)) - 1 << endl;
	}
	
	return 0;
}
