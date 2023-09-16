#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	
	if (a < b){
		cout << a << endl;
	}else {
		int h = a;
		while (a >= b){
			h += (a / b);
			a = (a / b) + (a % b);
		}
		cout << h << endl;
	}
	return 0;
}
