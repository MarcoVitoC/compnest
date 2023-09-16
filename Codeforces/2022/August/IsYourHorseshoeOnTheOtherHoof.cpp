#include <bits/stdc++.h>

using namespace std;

int main(){
	set<int> s;
	int num[5];
	for (int i=0; i<4; i++){
		cin >> num[i];
		s.insert(num[i]);
	}
	
	int len = s.size();
	cout << 4 - len << endl;
	return 0;
}
