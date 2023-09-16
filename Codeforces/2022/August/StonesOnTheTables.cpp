#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf ("%d", &n);
	char s[n+1];
	scanf ("%s", s); getchar();
	
	int countEqualLettersPair = 0;
	for (int i=0; i<strlen(s)-1; i++){
		if (s[i] == s[i+1]){
			countEqualLettersPair++;
		}
	}
	printf ("%d\n", countEqualLettersPair);
	return 0;
}
