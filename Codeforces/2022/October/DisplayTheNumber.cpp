#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--){
		long long int n;
		cin >> n;
		
		while (n != 0){ // subtract n until it becomes 0
			if (n % 2 != 0){ // if n is odd, then its optimal to print 7 before 1 to get the greatest result
				n -= 3; // subtract n by 3 because 7 use 3 segments
				cout << 7;
			}else { // if n is even, then its optimal to print 1 to get the greatest result
				n -= 2; // subtract n by 2 because 1 use 2 segments
				cout << 1;;
			}
		}
		cout << endl;
	}
	return 0;
}
