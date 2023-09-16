#include <bits/stdc++.h>

using namespace std;

int main(){
	int a1, a2;
	cin >> a1 >> a2;
	
	if (a1 == 1 && a2 == 1){
		cout << 0 << endl;
		return 0;
	}
	
	int minute = 0;
	while (a1 > 0 && a2 > 0){
		if (a1 <= a2){
			a1++;
			a2 -= 2;
		}else {
			a2++;
			a1 -= 2;
		}
		minute++;
	}
	
	cout << minute << endl;
	return 0;
}
