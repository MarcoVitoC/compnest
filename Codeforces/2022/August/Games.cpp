#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int h, a, home[n], guest[n];
	for (int i=0; i<n; i++){
		cin >> h >> a;
		home[i] = h;
		guest[i] = a;
	}
	
	int count = 0;
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			if (home[i] == guest[j]){
				count++;
			}
		}
	}
	
	cout << count << endl;
	return 0;
}
