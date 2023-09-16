#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	vector<pair<int, int> > a;
	int ai;
	for (int i=0; i<n; i++){
		cin >> ai;
		a.push_back(make_pair(ai, i+1));
	}
	sort(a.rbegin(), a.rend());
	
	int count = 0;
	for (int i=0; i<n; i++){
		count += a[i].first*i + 1;
	}
	cout << count << endl;
	
	for (int i=0; i<n; i++){
		cout << a[i].second << " ";
	}
	cout << endl;
	return 0;
}
