#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	string s;
	cin >> n >> s;
	
	stack<char> br;
	int len = s.size();
	for (int i=0; i<len; i++){
		if (s[i] == '('){
			br.push(s[i]);
		}else {
			if (!br.empty() && s[i] == ')' && br.top() == '('){
				br.pop();
			}
		}
	}
	
	cout << br.size() << endl;
}

int main(){
	int t;
	cin >> t;
	
	while (t--){
		solve();
	}
	return 0;
}
