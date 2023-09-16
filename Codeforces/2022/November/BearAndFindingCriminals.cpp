#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, a;
	cin >> n >> a;
	
	int t[n+1];
	for (int i=1; i<=n; i++){
		cin >> t[i];
	}
	
	int count = 0;
	for (int i=1; i<=n; i++){ // sum up the number of criminals in all city
		if (t[i] == 1){
			count++;
		}
	}
	
	for (int i=1; i<=n; i++){ // he will sure if both distance - i and distance + i has criminals
		if (a - i >= 1 && a + i <= n){
			if (t[a-i] != t[a+i]){ // if not, then reduce the number of criminals
				count--;
			}
		}else if (a - i > n - a || a + i >= a){ // if the distance isn't within the range of the array
			break;
		}
	}
	cout << count << endl;
	
	return 0;
}
