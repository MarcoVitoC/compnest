#include <stdio.h>

int main(){
	int a, b;
	scanf ("%d %d", &a, &b);
	
	int i = 0;
	while (1){
		if (a > b){
			printf ("%d\n", i);
			break;
		}else {
			a *= 3;
			b *= 2;
		}
		i++;
	}
	return 0;
}
