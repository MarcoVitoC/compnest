#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	
	int a[10005];
	vector<int> odd, even;
	for (int i=0; i<n*2; i++){
		cin >> a[i];
		
		if (a[i] % 2 == 0){
			even.push_back(i+1);
		}else {
			odd.push_back(i+1);
		}
	}
	
	vector<pair<int, int> > ans;
	if (!odd.empty()){
		for (int i=0; i<odd.size()-1; i+=2){
			ans.push_back({odd[i], odd[i+1]});
		}
	}
	if (!even.empty()){
		for (int i=0; i<even.size()-1; i+=2){
			ans.push_back({even[i], even[i+1]});
		}
	}
	
	for (int i=0; i<n-1; i++){
		cout << ans[i].first << " " << ans[i].second << endl;
	}	
}

int main(){
	int t;
	cin >> t;
	
	while (t--){
		solve();
	}
	return 0;
}
