#include <bits/stdc++.h>

using namespace std;

int main(){
	int k;
	cin >> k;
	
	vector<int> a;
	int num;
	for (int i=0; i<12; i++){
		cin >> num;
		a.push_back(num);
	}
	
	if (k == 0){
		cout << 0 << endl;
		return 0;
	}
	
	sort(a.begin(), a.end(), greater<int>());
	
	int count = 0, sum = 0;
	for (int i=0; i<a.size(); i++){
		sum += a[i];
		++count;
		if (sum >= k){
			cout << count << endl;
			break;
		}
	}
	if (sum < k){
		cout << -1 << endl;
	}
	return 0;
}
