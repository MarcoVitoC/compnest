#include <stdio.h>

int main(){
	int x;
	scanf ("%d", &x);
	
	int move[6] = {1, 2, 3, 4, 5}, count = 0, flag = 0;
	while (1){
		x -= move[4];
		if (x <= 0){
			count++;
			break;
		}else {
			for (int i=0; i<5; i++){
				if (x != move[i]){
					flag = 1;
				}
			}
			if (flag == 1 || flag == 0){
				count++;
			}
		}
	}
	printf ("%d\n", count);
	
	// cara 2
//	printf ("%d\n", (x+4)/5)
	return 0;
}
