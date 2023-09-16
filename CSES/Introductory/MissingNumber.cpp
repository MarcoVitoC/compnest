#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n;
	cin >> n;
	
	long long a, sum = 0;
	for (int i=0; i<n-1; i++){
		cin >> a;
		sum += a;
	}
	
	cout << n*(n+1)/2 - sum << endl;
	return 0;
}
