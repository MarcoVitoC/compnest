#include <stdio.h>
#include <string.h>

int main(){
	char s[105];
	scanf ("%s", s); getchar();
	
	int countUpr = 0, countLwr = 0;
	for (int i=0; i<strlen(s); i++){
		if (s[i] >= 'A' && s[i] <= 'Z'){
			countUpr++;
		}else {
			countLwr++;
		}
	}
	
	if (countLwr >= countUpr){
		strlwr(s);
	}else {
		strupr(s);
	}
	puts(s);
	
	return 0;
}
