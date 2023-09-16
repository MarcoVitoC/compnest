#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int n;
	cin >> n;
	
	int total = 0, cheapestPrice = 101;
	for (int i=0; i<n; i++){
		int a, p;
		cin >> a >> p;
		
		if (p < cheapestPrice){
			cheapestPrice = p;
		}
		
		total += a*cheapestPrice;
	}
	
	cout << total << endl;
	return 0;
}
