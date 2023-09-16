#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	string s;
	cin >> n >> s;
	
	int countQ = 0;
	for (int i=0; i<n; i++){
		if (s[i] == '?'){
			countQ++;
		}
	}
	
	if (n == 1){
		if (s[0] == '?'){ // if the size is one, then it can be R or B
			cout << 'R' << endl;
		}else {
			cout << s << endl;
		}
		return;
	}
	
	if (countQ == n){ // if all squares is empty (?)
		s[0] = 'R';
		for (int i=1; i<n; i++){
			s[i] = (s[i-1] == 'R') ? 'B' : 'R';
		}
		cout << s << endl;
		return;
	}
	
	for (int i=1; i<n; i++){ // color the square forward
		if (s[i] == '?'){
			if (s[i-1] == 'R'){
				s[i] = 'B';	
			}else if (s[i-1] == 'B'){
				s[i] = 'R';
			}
		}
	}
	for (int i=n-1; i>=0; i--){ // color the square backward
		if (s[i] == '?'){
			if (s[i+1] == 'R'){
				s[i] = 'B';	
			}else if (s[i+1] == 'B'){
				s[i] = 'R';
			}
		}
	}
	cout << s << endl;
}

int main(){
	int t;
	cin >> t;
	
	while (t--){
		
		solve();
	}
	return 0;
}
