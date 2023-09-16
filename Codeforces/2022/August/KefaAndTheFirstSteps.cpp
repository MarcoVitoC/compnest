#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int a[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	
	int max[100001], idx = 0;
	int count = 0, flag = 0;
	for (int i=0; i<n; i++){
		if (i > 0 && a[i] < a[i-1]){
			flag = 1;
			max[idx] = count;
			idx++;
			count = 0;
		}
		count++;
		if (i == n - 1){
			max[idx] = count;
			idx++;
		}
	}
	
	if (flag == 0){
		cout << count << endl;
	}else {
		int maxSequence = 0;
		for (int i=0; i<idx; i++){
			if (max[i] > maxSequence){
				maxSequence = max[i];
			}
		}
		cout << maxSequence << endl;
	}
	
	return 0;
}
