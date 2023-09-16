#include <bits/stdc++.h>

using namespace std;

int main(){
	set <int> s;
	int n;
	cin >> n;
	
	for (int i=0; i<2; i++){
		int p;
		cin >> p;
		
		int lvl;
		for (int i=0; i<p; i++){
			cin >> lvl;
			s.insert(lvl);
		}
	}
	
	int len = s.size();
	if (len == n){
		cout << "I become the guy." << endl;
	}else {
		cout << "Oh, my keyboard!" << endl;
	}
	return 0;
}
