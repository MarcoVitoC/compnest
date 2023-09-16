#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	
	int n, round;
	while (t--){
		cin >> n;
		vector <int> numSum;
		round = 1;
		while (n != 0){
			if (n % 10 > 0){
				numSum.push_back((n % 10) * round);
			}
			n /= 10;
			round *= 10;
		}
		cout << numSum.size() << endl;
		for (int i=0; i<numSum.size(); i++){
			cout << numSum[i];
			if (i < numSum.size() - 1){
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
