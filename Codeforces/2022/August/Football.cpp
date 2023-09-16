#include <bits/stdc++.h>

using namespace std;

int main(){
	string str;
	cin >> str;
	
	int countZero = 0, countOne = 0;
	for (int i=0; i<str.size(); i++){
		if (str[i] == '0'){
			countOne = 0;
			countZero++;
		}else if (str[i] == '1'){
			countZero = 0;
			countOne++;
		}
		
		if (countZero >= 7 || countOne >= 7){
			cout << "YES" << endl;
			return 0;
		}
	}
	
	cout << "NO" << endl;
	return 0;
}
