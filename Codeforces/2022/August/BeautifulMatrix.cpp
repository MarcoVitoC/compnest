#include <stdio.h>
#include <stdlib.h>
#define row 5
#define col 5

int main(){
	int matrix[row][col], count = 0;
	for (int i=0; i<row; i++){
		for (int j=0; j<col; j++){
			scanf ("%d", &matrix[i][j]);
		}
	}
	
	for (int i=0; i<row; i++){
		for (int j=0; j<col; j++){
			if (matrix[i][j] == 1){
				count = abs(row-3-i) + abs(col-3-j);
				printf ("%d\n", count);
				break;
			}
		}
		if (count != 0){
			break;
		}
	}
	return 0;
}
