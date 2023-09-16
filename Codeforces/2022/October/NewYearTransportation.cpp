#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, t;
	cin >> n >> t;
	
	int a[n];
	for (int i=1; i<=n-1; i++){
		cin >> a[i];
	} 
	
	int port = 1; // initialize 1 as the first cell where he stand
	while (port < t){ // the portal value will always be smaller than t because it can't go backward
		port += a[port]; // teleport from current position to connected cell
	}
	
	if (port == t){ // if the portal can reach wanted destination
		cout << "YES" << endl;
	}else {
		cout << "NO" << endl;
	}
	
	return 0;
}
