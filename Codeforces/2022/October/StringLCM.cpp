#include <bits/stdc++.h>

using namespace std;

void solve(){
	string s, t;
	cin >> s >> t;
	
	int lenS = s.size(), lenT = t.size();
	int LCM = (lenS * lenT) / __gcd(lenS, lenT); // divided by __gcd(lenS, lenT) to obtain the shortest non-empty string
	string c1 = "", c2 = "";
	for (int i=0; i<LCM/lenS; i++){ // copy the string s LCM/lenS times
		c1 += s;
	}
	for (int i=0; i<LCM/lenT; i++){ // copy the string t LCM/lenT times
		c2 += t;
	}
	
	if (c1 == c2){ // if those 2 copy strings are equal, then we get the answer
		cout << c1 << endl;
	}else {
		cout << -1 << endl; // there is no solution
	}
}

int main(){
	int q;
	cin >> q;
	
	while (q--){
		solve();
	}
	return 0;
}
