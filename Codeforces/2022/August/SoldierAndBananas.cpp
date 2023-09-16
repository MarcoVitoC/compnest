#include <stdio.h>

int main(){
	int k, n, w;
	scanf ("%d %d %d", &k, &n, &w);
	
	int cost = 0;
	for (int i=1; i<=w; i++){
		cost += k*i;
	}
	
	if (n >= cost){
		printf ("0\n");
	}else {
		printf ("%d\n", cost - n);
	}
	return 0;
}
