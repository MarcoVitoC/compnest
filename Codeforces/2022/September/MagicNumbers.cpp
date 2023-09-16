#include <bits/stdc++.h>

using namespace std;

int main(){
	string n;
	cin >> n;
	
	int flag = 0;
	for (int i=0; i<n.size(); i++){
		if (n[i] != '1' && n[i] != '4' || n[0] == '4'){
			flag = 1;
			break;
		}
		if (n[i] == '4' && n[i+1] == '4' && n[i+2] == '4'){
			flag = 1;
			break;
		}
	}
	
	if (flag == 0){
		cout << "YES" << endl;
	}else {
		cout << "NO" << endl;
	}
	return 0;
}
