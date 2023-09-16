#include <stdio.h>
#include <string.h>

int main(){
	char s[105];
	scanf ("%s", s); getchar();
	if (strlen(s) == 1){
		printf ("%s\n", s);
		return 0;
	}else {
		char temp;
		for (int i=0; i<strlen(s)-2; i+=2){
			for (int j=0; j<strlen(s)-2-i; j+=2){
				if (s[j] >= s[j+2]){
					temp = s[j];
					s[j] = s[j+2];
					s[j+2] = temp;
				}
			}
		}
		printf ("%s\n", s);
	}
	
	return 0;
}
