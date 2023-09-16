#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	string s;
	cin >> s;
	
	int len = s.size(), uprCase = 0;
	
	for (int i=0; i<len; i++){
		if (s[i] >= 'A' && s[i] <= 'Z'){
			uprCase++;
		}
	}
	
	if (uprCase == len || (uprCase == len-1 && s[0] >= 'a' && s[0] <= 'z')){
		for (int i=0; i<len; i++){
			if (s[i] >= 'A' && s[i] <= 'Z'){
				s[i] += 32;
			}else {
				s[i] -= 32;
			}
		}
	}
	cout << s << endl;
	
	return 0;
}
