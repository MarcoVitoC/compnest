#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf ("%d", &n);
	
	char word[105];
	for (int i=0; i<n; i++){
		scanf ("%s", word); getchar();
		if (strlen(word) <= 10){
			printf ("%s\n", word);
		}else {
			printf ("%c%d%c\n", word[0], strlen(word)-2, word[strlen(word)-1]);	
		}
	}
	return 0;
}
