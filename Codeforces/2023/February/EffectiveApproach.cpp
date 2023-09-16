#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	int n, a, idx[100005], m, b;
	cin >> n;
	
	for (int i=0; i<n; i++){
		cin >> a;
		idx[a] = i + 1;
	}
	
	cin >> m;
	
	ll vasya = 0, petya = 0;
	for (int i=0; i<m; i++){
		cin >> b;
		vasya += idx[b];
		petya += n - idx[b] + 1;
	}
	
	cout << vasya << " " << petya << '\n';
	return 0;
}
