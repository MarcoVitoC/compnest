#include <stdio.h>

int main(){
	long long int n;
	scanf ("%lld", &n);
	
	int countLuckyDigits = 0;
	while (1){
		if (n % 10 == 7 || n % 10 == 4){
			countLuckyDigits++;
		}
		n /= 10;
		if (n == 0){
			if (countLuckyDigits == 7 || countLuckyDigits == 4){
				puts("YES");
			}else {
				puts("NO");
			}
			break;
		}
	}
	return 0;
}
