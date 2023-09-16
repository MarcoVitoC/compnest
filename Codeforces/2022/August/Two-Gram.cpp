#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	string s;
	cin >> s;
	
	int maxSame = 0;
	string result;
	for (int i=0; i<n-1; i++){
		int count = 0;
		for (int j=0; j<n-1; j++){
			if (s[j] == s[i] && s[j+1] == s[i+1]){ // check the first and second character
				count++; // count the same pair of character
			}
		}
		if (count > maxSame){
			maxSame = count;
			result = string(1, s[i]) + string(1, s[i+1]); // combine first and second character into 1 string
		}
	}
	cout << result << endl;
	return 0;
}
