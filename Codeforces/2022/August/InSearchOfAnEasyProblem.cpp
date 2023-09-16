#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int person, flag = 0;
	while (n--){
		cin >> person;
		if (person == 1){
			flag = 1;
		}
	}
	
	if (flag == 1){
		cout << "HARD" << endl;
	}else {
		cout << "EASY" << endl;
	}
	return 0;
}
