#include <stdio.h>

int main(){
	int n, X = 0;
	scanf ("%d", &n);
	
	char statement[5];
	for (int i=0; i<n; i++){
		scanf ("%s", statement); getchar();
		if (statement[1] == '+'){
			X += 1;
		}else if (statement[1] == '-'){
			X -= 1;
		}
	}
	printf ("%d\n", X);
	return 0;
}
