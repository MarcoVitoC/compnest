#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	
	int days = 0;
	while (1){
		++days;
		if (n == 0){
			cout << days - 1 << endl;
			return 0;
		}
		--n;
		if (days % m == 0){
			++n;
		}
	}
	return 0;
}
