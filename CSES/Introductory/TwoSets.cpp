#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ll n;
	cin >> n;
	
	ll sum = n*(n+1)/2;
	if (sum % 2 != 0){
		cout << "NO" << endl;
	}else {
		cout << "YES" << endl;
		ll sumSet = sum / 2;
		
		ll count = 0, countFir = 0, countSec = 0;
		vector<ll> fir, sec; 
		for (int i=n; i>=1; i--){
			if (count + i <= sumSet){
				count += i;
				countFir++;
				fir.push_back(i);
			}else {
				countSec++;
				sec.push_back(i);
			}
		}
		
		cout << countFir << endl;
		for (int i=fir.size()-1; i>=0; i--){
			cout << fir[i] << " ";
		}
		cout << endl;
		
		cout << countSec << endl;
		for (int i=sec.size()-1; i>=0; i--){
			cout << sec[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
