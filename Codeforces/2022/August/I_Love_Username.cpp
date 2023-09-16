#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int points[n];
	for (int i=0; i<n; i++){
		cin >> points[i];
	}
	
	int count = 0, flag;
	for (int i=1; i<n; i++){
		flag = 0;
		for (int j=i-1; j>=0; j--){
			if (points[i] > points[j]){
				flag = 1;
			}else {
				break;
			}
			if (j == 0 && flag == 1){
				count++;
			}
		}
		for (int j=i-1; j>=0; j--){
			if (points[i] < points[j]){
				flag = 1;
			}else {
				break;
			}
			if (j == 0 && flag == 1){
				count++;
			}
		}
	}
	
	cout << count << endl;
	return 0;
}
