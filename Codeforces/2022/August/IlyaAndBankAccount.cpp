#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int max = n;
	if (n/10 > max){
		max = n / 10;
	}
	if ((n/100)*10 + n%10 > max){
		max = (n/100)*10 + n%10;
	}
	
	cout << max << endl;
	return 0;
}
