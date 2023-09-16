#include <bits/stdc++.h>

using namespace std;

int main(){
	int s, n;
	cin >> s >> n;
	
	vector<pair<int, int> > d;
	for (int i=0; i<n; i++){
		int x, y;
		cin >> x >> y;
		d.push_back(make_pair(x, y));
	}
	sort(d.begin(), d.end());
	
	int countWin = 0;
	for (int i=0; i<n; i++){
		if (s > d[i].first){
			s += d[i].second;
			countWin++;
		}else {
			cout << "NO" << endl;
			return 0;
		}
	}
	
	cout << "YES" << endl;
	return 0;
}
