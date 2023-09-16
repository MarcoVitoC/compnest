#include <bits/stdc++.h>

using namespace std;

int max(int a, int b){
	return (a > b) ? a : b;
}

int min(int a, int b){
	return (a < b) ? a : b;
}

int main(){
	int a, b;
	cin >> a >> b;
	
//	int wearDiff = 0, wearSame = 0;
//	while (1){
//		if (a == 0 && b == 0){
//			break;
//		}
//		if (a - 1 >= 0 && b - 1 >= 0){
//			wearDiff++;
//			a--;
//			b--;
//		}else if (a == 0 && b > 1){
//			wearSame++;
//			b -= 2;
//		}else if (a > 1 && b == 0){
//			wearSame++;
//			a -= 2;
//		}else if (a == 1){
//			a--;
//		}else if (b == 1){
//			b--;
//		}
//	}
//	
//	cout << wearDiff << " " << wearSame << endl;
	
	// ANOTHER SOLUTION
	cout << min(a, b) << " " << max((a - min(a, b)) / 2, (b - min(a, b)) / 2) << endl;
	return 0;
}
