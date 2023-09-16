#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--){
		string s;
		cin >> s;
	
		int countZero = 0, countOne = 0;
		for (int i=0; i<s.size(); i++){
			if (s[i] == '0'){
				countZero++;
			}
			if (s[i] == '1'){
				countOne++;
			}
		}
		
		int min = (countZero <= countOne) ? countZero : countOne;
		if (min % 2 != 0){
			cout << "DA" << endl;
		}else {
			cout << "NET" << endl;
		}
	}
	return 0;
}
