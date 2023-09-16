#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--){
		int x;
		cin >> x;
		
		int sum = 0, num = 9;
		vector<int> res;
		while (sum < x && num > 0){
			int min = ((x - sum) < num) ? (x - sum) : num;
			res.push_back(min);
			sum += num;
			num--;
		}
		reverse(res.begin(), res.end());
		if (sum < x){
			cout << -1 << endl;
		}else {
			for (int i=0; i<res.size(); i++){
				cout << res[i];
			}
			cout << endl;
		}
	}
	return 0;
}
