#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ll n;
	cin >> n;
	
	ll a, sum1 = 0;
	for (int i=0; i<n; i++){
		cin >> a;
		sum1 += a;
	}
	
	ll b, sum2 = 0;
	for (int i=0; i<n-1; i++){
		cin >> b;
		sum2 += b;
	}
	
	ll c, sum3 = 0;
	for (int i=0; i<n-2; i++){
		cin >> c;
		sum3 += c;
	}
	
	cout << sum1 - sum2 << endl;
	cout << sum2 - sum3 << endl;
	return 0;
}
