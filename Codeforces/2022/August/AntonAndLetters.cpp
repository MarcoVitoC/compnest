#include <bits/stdc++.h>

using namespace std;

int main(){
	set <char> letters;
	char str[1001];
	scanf ("%[^\n]", str); getchar();
	
	for (int i=0; i<strlen(str); i++){
		if (str[i] >= 'a' && str[i] <= 'z'){
			letters.insert(str[i]);
		}
	}
	
	cout << letters.size() << endl;
	return 0;
}
