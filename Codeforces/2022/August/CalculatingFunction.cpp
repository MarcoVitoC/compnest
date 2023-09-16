#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int n;
	cin >> n;
	
	// TIME LIMIT EXCEEDED
//	int count = 0;
//	for (int i=1; i<=n; i++){
//		if (i % 2 == 0){
//			count += i;
//		}else {
//			count += (i * -1);
//		}
//	}

	if (n % 2 == 0){
		cout << n / 2 << endl;
	}else {
		cout << -(n + 1) / 2 << endl;
	}
	
	return 0;
}
