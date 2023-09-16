#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, d;
	cin >> n >> d;
	
	int t[n];
	for (int i=0; i<n; i++){
		cin >> t[i];
	}
	
	int singerTime = 0;
	for (int i=0; i<n; i++){
		singerTime += t[i];
	}
	int singerTimeWithRest = singerTime + (n - 1) * 10;
	
	if (singerTimeWithRest > d){
		cout << -1 << endl;
	}else {
		cout << (d - singerTime) / 5 << endl;
	}
	return 0;
}
