#include <stdio.h>

int main(){
	int n, team[5];
	scanf ("%d", &n);
	
	int count = 0;
	int temp;
	for (int i=0; i<n; i++){
		temp = 0;
		for (int j=0; j<3; j++){
			scanf ("%d", &team[j]);
			temp += team[j];
		}
		if (temp >= 2){
			count++;
		}
	}
	printf ("%d\n", count);
	
	// Cara 2
//	int n, team[5];
//	scanf ("%d", &n);
//	
//	int count = 0, result = 0;;
//	for (int i=0, a, b, c; i<n; i++){
//		scanf ("%d %d %d", &a, &b, &c);
//		count += a + b + c;
//		if (count >= 2){
//			result++;
//		}
//		count = 0;
//	}
//	printf ("%d\n", result);
	return 0;
}
