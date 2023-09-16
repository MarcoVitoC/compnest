#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	
	int len = s.size(), count = 1, max = -1;
	for (int i=0; i<len; i++){
		if (s[i] == s[i+1]){
			count++;
		}else {
			count = 1;
		}
		
		if (count > max){
			max = count;
		}
	}
	
	cout << max << endl;
	return 0;
}
