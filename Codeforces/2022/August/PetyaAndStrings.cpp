#include <stdio.h>
#include <string.h>

int main(){
	char str1[105], str2[105];
	scanf ("%s", str1); getchar();
	scanf ("%s", str2); getchar();
	
	if (strcmp(strlwr(str1), strlwr(str2)) == 0){
		puts("0");
	}else if (strcmp(strlwr(str1), strlwr(str2)) < 0){
		puts("-1");
	}else {
		puts("1");
	}
	return 0;
}
