#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	vector<int> arr(n);
	for (int i=0; i<n; i++){
		cin >> arr[i];
		arr.push_back(arr[i]);
	}
	
	int count = 0;
	for (int i=0; i<n; i++){
		if (arr[i] % 2 != 0){
			count++;
		}
	}
	
	cout << min(count, n - count) << endl; 
	return 0;
}
