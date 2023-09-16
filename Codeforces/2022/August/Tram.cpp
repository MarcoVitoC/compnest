#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, a, b, max = 0, count = 0;
	cin >> n;
	
	for (int i=0; i<n; i++){
		cin >> a >> b;
		if (i > 0){
			count = count - a + b;
		}else {
			count = count + b - a;
		}
		if (count > max){
			max = count; 
		}
	}
	cout << max << endl;
	
	return 0;
}
