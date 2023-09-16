#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int dolarBills[] = {1, 5, 10, 20, 100};
	int i = 4, count = 0;
	while (n){
		if (n - dolarBills[i] >= 0){
			n -= dolarBills[i];
			count++;
		}else {
			i--;
		}
	}
	
	cout << count << endl;
	return 0;
}
