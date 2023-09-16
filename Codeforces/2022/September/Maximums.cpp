#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int b[n+1], x = 0;
	for (int i=1; i<=n; i++){
		cin >> b[i];
		b[i] += x;
		x = max(x, b[i]);
		cout << b[i];
		
		if (i < n){
			cout << " ";
		}else {
			cout << endl;
		}
	}
	return 0;
}
