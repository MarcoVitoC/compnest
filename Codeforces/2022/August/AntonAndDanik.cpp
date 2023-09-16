#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	string s;
	cin >> s;
	
	int countD = 0, countA = 0;
	int len = s.size();
	while (len--){
		if (s[len] == 'D'){
			countD++;
		}
		if (s[len] == 'A'){
			countA++;
		}
	}
	if (countD > countA){
		cout << "Danik" << endl;
	}else if (countA > countD){
		cout << "Anton" << endl;
	}else {
		cout << "Friendship" << endl;
	}
	return 0;
}
