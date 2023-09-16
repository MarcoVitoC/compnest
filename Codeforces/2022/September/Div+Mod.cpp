#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--){
		int l, r, a;
		cin >> l >> r >> a;
		
		int res = (r/a) + (r%a);
		int b = r / a * a - 1;
		if (b >= l){
			res = max(res, (b/a) + (b%a));
		}
		cout << res << endl;
	}
	return 0;
}
