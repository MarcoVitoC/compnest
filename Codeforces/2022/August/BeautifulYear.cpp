#include <bits/stdc++.h>

using namespace std;

int main(){
	int y;
	cin >> y;
	
	int firstDigit, secondDigit, thirdDigit, fourthDigit;
	while (1){
		++y;
		firstDigit = y / 1000;
		secondDigit = y / 100 % 10;
		thirdDigit = y / 10 % 10;
		fourthDigit = y % 10;
		if (firstDigit != secondDigit && firstDigit != thirdDigit && firstDigit != fourthDigit && secondDigit != thirdDigit && secondDigit != fourthDigit && thirdDigit != fourthDigit){
			break;
		}
	}
	cout << y << endl;
	
	return 0;
}
