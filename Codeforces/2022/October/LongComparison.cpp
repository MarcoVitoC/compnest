#include <bits/stdc++.h>
#define ll long long int 

using namespace std;

int main(){
	ll t;
	cin >> t;
	
	while (t--){
		ll x1, p1, x2, p2;
		cin >> x1 >> p1 >> x2 >> p2;
		
		int mn = min(p1, p2); // If p1 or p2 has very large value since the constraint is <= 10^6, then find the largest p zeros
		p1 -= mn;
		p2 -= mn;
		
		if (p1 >= 7){ // if p1 is the largest, then x1 will be the largest,
			cout << ">" << endl;
		}else if (p2 >= 7){ // otherwise, x2 will be the largest
			cout << "<" << endl;
		}else { // If p1 and p2 is not very large, then we can compare the values normally
			int pwr1 = pow(10, p1);
			int pwr2 = pow(10, p2);
			
			x1 *= pwr1;
			x2 *= pwr2;
			
			if (x1 > x2){
			cout << ">" << endl;
			}else if (x1 < x2){
				cout << "<" << endl;
			}else {
				cout << "=" << endl;
			}
		}
	}
	return 0;
}
