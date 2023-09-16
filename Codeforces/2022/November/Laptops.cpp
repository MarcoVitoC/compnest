#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int flag = 0;
	while (n--){
		int a, b;
		cin >> a >> b;
		if (b - a < 0){
			flag = 1;
		}
	}
	
	if (flag == 1){
		cout << "Happy Alex" << endl;
	}else {
		cout << "Poor Alex" << endl;
	}
	return 0;
}
