#include <bits/stdc++.h>

using namespace std;

/* 
Example test case: x = 10, n = 10
i = 0               x = 10
i = 1     x = 9 					 // 10 is even, so move to the left, 10 - i = 10 - 1
i = 2                         x = 11 // 9 is odd, so move to the right, 9 + i = 9 + 2
i = 3                         x = 14 // 11 is odd, so move to the right, 11 + i = 11 + 3
i = 4               x = 10 			 // 14 is even, so move to the left, 14 - i = 14 - 4
i = 5     x = 5 					 // 10 is even, so move to the left, 10 - i = 10 - 5
i = 6                         x = 11 // 5 is odd, so move to the right, 5 + i = 5 + 6
i = 7                         x = 18 // 11 is odd, so move to the right, 11 + i = 11 + 7
i = 8               x = 10 			 // 18 is even, so move to the left, 18 - i = 18 - 8
i = 9     x = 1						 // 10 is even, so move to the left, 10 - i = 10 - 9
i = 10                        x = 11 // 1 is odd, so move to the right, 1 + i = 1 + 10

- If i % 4 == 0 (i = 4, i = 8), then it will has the same value as x.
- If i % 4 == 1 (i = 1, i = 5, i = 9), then the value will always be x - i.
- If i % 4 == 2 (i = 2, i = 6, i = 10), then the value will always be x + 1.
- If i % 4 == 3 (i = 3, i = 7), then the value will always be x + n + 1.
*/

int main(){
	int t;
	cin >> t;
	
	while (t--){
		long long int x, n, D;
		cin >> x >> n;
		
		if (n % 4 == 0){
			D = 0;
		}else if (n % 4 == 1){
			D = -n;
		}else if (n % 4 == 2){
			D = 1;
		}else if (n % 4 == 3){
			D = n + 1;
		}
		
		if (x % 2 == 0){
			cout << x + D << endl;
		}else {
			cout << x - D << endl;
		}
	}
	return 0;
}
