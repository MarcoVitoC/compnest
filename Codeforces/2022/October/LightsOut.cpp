#include <bits/stdc++.h>

using namespace std;

int switched[4][4], lightChange[4][4];

int main(){
	for (int i=1; i<=3; i++){
		for (int j=1; j<=3; j++){
			cin >> switched[i][j];
			lightChange[i][j] = switched[i][j];
		}
	}
	
	for (int i=1; i<=3; i++){
		for (int j=1; j<=3; j++){
			// If the light is switched, the adjacent lights will also be switched. Then add the adjacent lights with the number of switched lights.
			if (switched[i][j] != 0){ 
				lightChange[i][j+1] += switched[i][j]; // add right
				lightChange[i][j-1] += switched[i][j]; // add left
				lightChange[i-1][j] += switched[i][j]; // add up
				lightChange[i+1][j] += switched[i][j]; // add down
			}
		}
	}
	
	for (int i=1; i<=3; i++){
		for (int j=1; j<=3; j++){
			// The initial light condition is 'ON' (1). 
			if (lightChange[i][j] % 2 != 0){ // So, if the number is odd,  
				cout << 0; // the light will always be turned off;
			}else {
				cout << 1; // otherwise, it'll always be turned on.
			}
		}
		cout << endl;
	}
	return 0;
}
