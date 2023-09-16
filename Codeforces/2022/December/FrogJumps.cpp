#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--){
		string s;
		cin >> s;
		
		vector<int> R; // Create an array with the initial frog's position, R position (1-indexed), and n + 1 position
		R.push_back(0);
		for (int i=0; i<s.size(); i++){
			if (s[i] == 'R'){
				R.push_back(i+1);
			}
		}
		R.push_back(s.size()+1);
		
		int ans = 0;
		for (int i=1; i<R.size(); i++){
			ans = max(ans, R[i] - R[i-1]); // get the maximum difference in the array to get the minimum possible value of d
		}
		cout << ans << endl;
	}
	return 0;
}
