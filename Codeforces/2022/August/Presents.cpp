#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int p, arr[n+1];
	for (int i=0; i<n; i++){
		cin >> p;
		arr[p-1] = i + 1;
	}
	for (int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	
	return 0;
}
