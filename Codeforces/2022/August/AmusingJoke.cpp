#include <bits/stdc++.h>

using namespace std;

int main(){
	string guest, host, pile;
	cin >> guest >> host >> pile;
	
	int alphabet[30];
	for (int i=0; i<30; i++){
		alphabet[i] = 0;
	}
	
	for (int i=0; i<guest.size(); i++){
		alphabet[guest[i] - 65]++; 
	}
	
	for (int i=0; i<host.size(); i++){
		alphabet[host[i] - 65]++; 
	}
	
	for (int i=0; i<pile.size(); i++){
		if (alphabet[pile[i] - 65] - 1 < 0 ){
			cout << "NO" << endl;
			return 0;
		}
		alphabet[pile[i] - 65] -= 1;
	}
	
	for (int i=0; i<30; i++){
		if (alphabet[i] == 1){
			cout << "NO" << endl;
			return 0;
		}
	}
	
	cout << "YES" << endl;
	return 0;
}
