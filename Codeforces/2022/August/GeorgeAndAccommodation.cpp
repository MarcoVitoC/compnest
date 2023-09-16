#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int p, q, numberOfRooms = 0;
	for (int i=0; i<n; i++){
		cin >> p >> q;
		if (q - p >= 2){
			numberOfRooms++;
		}
	}
	cout << numberOfRooms << endl;
	return 0;
}
