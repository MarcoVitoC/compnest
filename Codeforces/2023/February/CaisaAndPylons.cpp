#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	vector<int> h;
	h.push_back(0);
	for (int i=1; i<n+1; i++){
		int p;
		cin >> p;
		h.push_back(p);
	}
	
	int res = *max_element(h.begin(), h.end());
	
	cout << res << endl;
	
	return 0;
}
