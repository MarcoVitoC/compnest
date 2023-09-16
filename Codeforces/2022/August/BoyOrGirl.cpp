#include <stdio.h>
#include <string.h>

int main(){
	char str[105];
	scanf ("%s", str); getchar();
	
	int count[1000], len = 0;
	for (int i=0; i<strlen(str); i++){
		if (count[str[i] - 49] != 1){ //to prevent duplicate character in a string
			count[str[i] - 49] = 1;
			len++; //to measure string length with prevented duplicate characters
		}
	}
	if (len % 2 == 0){
		printf ("CHAT WITH HER!\n");
	}else {
		printf ("IGNORE HIM!\n");
	}
	return 0;
}
