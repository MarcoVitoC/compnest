#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	
	int time = 240, solveTime = 0, count = 0;
	for (int i=1; i<=n; i++){
		solveTime += (i * 5);
		if (k + solveTime <= time){
			count++;
		}
	}
	
	cout << count << endl;
	return 0;
}
