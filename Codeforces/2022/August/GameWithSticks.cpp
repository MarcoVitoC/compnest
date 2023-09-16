#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	
	int min = (n <= m) ? n : m;
	
	if (min % 2 == 0){
		cout << "Malvika" << endl;
	}else {
		cout << "Akshat" << endl;
	}
	return 0;
}
