#include <bits/stdc++.h>

using namespace std;

void solve(){
	string s;
	cin >> s;
	
	int len = s.size(), countAB = 0, countBA = 0;
	for (int i=0; i<len-1; i++){
		if (s[i] == 'a' && s[i+1] == 'b'){ // count how many AB occur
			countAB++;
		}
	}
	for (int i=0; i<len-1; i++){
		if (s[i] == 'b' && s[i+1] == 'a'){ // count how many BA occur
			countBA++;
		}
	}
	
	if (s[0] == s[len-1]){ // if s1 == sn, then AB(s) is always equal to BA(s)
		cout << s << endl;
	}else {
		if (s[0] == 'b'){ // if s1 = b, 
			s[len-1] = 'b'; // then sn should be equal to b too
		}else {
			s[len-1] = 'a'; // otherwise, sn should be equal to a, so that AB(s) = BA(s).
		}
		cout << s << endl;
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
