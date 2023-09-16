#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ll n;
	cin >> n;
	
	vector<ll> a;
	ll b;
	for (int i=0; i<n; i++){
		cin >> b;
		a.push_back(b);
	}

	sort(a.begin(), a.end());
	int count = 0;
	int min = *min_element(a.begin(), a.end());
	int max = *max_element(a.begin(), a.end());
	for (int i=1; i<n-1; i++){
		if (a[i] > min && a[i] < max){
			count++;
		}
	}
	
	cout << count << endl;
	return 0;
}
