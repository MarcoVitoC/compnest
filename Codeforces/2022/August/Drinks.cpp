#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int p;
	float avg = 0;
	for (int i=0; i<n; i++){
		cin >> p;
		avg += p;
	}
	
	cout << avg / n << endl;
	return 0;
}
