#include <bits/stdc++.h>

using namespace std;

int main(){
	string str1, str2, ans;
	cin >> str1 >> str2;
	
	for (int i=0; i<str1.size(); i++){
		if (str1[i] == str2[i]){
			ans += '0';
		}else {
			ans += '1';
		}
	}
	cout << ans << endl;
	
	return 0;
}
